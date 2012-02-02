/*
	Copyright (c) 2004-2011, The Dojo Foundation All Rights Reserved.
	Available via Academic Free License >= 2.1 OR the modified BSD license.
	see: http://dojotoolkit.org/license for details
*/


window[(typeof (djConfig)!="undefined"&&djConfig.scopeMap&&djConfig.scopeMap[0][1])||"dojo"]._xdResourceLoaded(function(_1,_2,_3){return {depends:[["provide","dojo.Stateful"]],defineResource:function(_4,_5,_6){if(!_4._hasResource["dojo.Stateful"]){_4._hasResource["dojo.Stateful"]=true;_4.provide("dojo.Stateful");_4.declare("dojo.Stateful",null,{postscript:function(_7){if(_7){_4.mixin(this,_7);}},get:function(_8){return this[_8];},set:function(_9,_a){if(typeof _9==="object"){for(var x in _9){this.set(x,_9[x]);}return this;}var _b=this[_9];this[_9]=_a;if(this._watchCallbacks){this._watchCallbacks(_9,_b,_a);}return this;},watch:function(_c,_d){var _e=this._watchCallbacks;if(!_e){var _f=this;_e=this._watchCallbacks=function(_10,_11,_12,_13){var _14=function(_15){if(_15){_15=_15.slice();for(var i=0,l=_15.length;i<l;i++){try{_15[i].call(_f,_10,_11,_12);}catch(e){console.error(e);}}}};_14(_e["_"+_10]);if(!_13){_14(_e["*"]);}};}if(!_d&&typeof _c==="function"){_d=_c;_c="*";}else{_c="_"+_c;}var _16=_e[_c];if(typeof _16!=="object"){_16=_e[_c]=[];}_16.push(_d);return {unwatch:function(){_16.splice(_4.indexOf(_16,_d),1);}};}});}}};});