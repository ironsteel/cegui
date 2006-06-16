--
-- lua_and_tolua++ premake script
--

cegui_dynamic("lua_and_tolua++", "c")

package.files =
{
	matchfiles(pkgdir.."src/*.c"),
	matchfiles(pkgdir.."src/tolua++/*.c"),
	matchfiles(pkgdir.."src/tolua++/*.h"),
	matchfiles(pkgdir.."src/lib/*.c"),
	matchfiles(pkgdir.."include/*.h")
}

include(pkgdir.."include")

define("LUA_AND_TOLUA_EXPORTS")