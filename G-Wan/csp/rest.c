int main(int argc, char *argv[])
{
	//forum state
	//forum = *(forum_t**)get_env(argv, US_HANDLER_DATA, 0);

	//HTTP request
	request_t req = {
	.args = parse_args(argc, argv),
	.user = user_get(forum, 1), //user from cookies
	};

	//HTTP response
	xbuf_t *reply = get_reply(argv);

	int http_code = 405; //method not allowed
	switch (get_env(argv, REQUEST_METHOD, 0))
	{
		case HTTP_GET:
		{
			http_code = method_get(forum, &req, reply);
		} break;
		case HTTP_POST:
		{
			http_code = method_post(forum, &req, reply);
		} break;
		case HTTP_PUT:
		{
			http_code = method_put(forum, &req, reply);
		} break;
		case HTTP_DELETE:
		{
			http_code = method_delete(forum, &req, reply);
		} break;
		case HTTP_HEAD: //GET without content body
		{
			http_code = method_get(forum, &req, reply);
			xbuf_clear(reply);
		} break;
	}
	return http_code;
}
HTTP_method method_post,
method_get,
method_put,
method_delete;

//READ
HTTP_method method_get
{
	return 200;
}
//CREATE
HTTP_method method_post
{
	return 303;
}
//UPDATE
HTTP_method method_put
{
	return 405;
}
//DELETE
HTTP_method method_delete
{
	return 405;
}
