lib_sources = [	'AABBtree.cc',
		'Biarc.cc',
		'Circle.cc',
		'Clothoid.cc',
		'ClothoidDistance.cc',
		'ClothoidG2.cc',
		'ClothoidList.cc',
		'CubicRootsFlocke.cc',
		'Fresnel.cc',
		'G2lib.cc',
		'Line.cc',
		'Triangle2D.cc',
		'PolyLine.cc']

install_headers([	'AABBtree.hh',
			'Biarc.hh',
			'Circle.hh',
			'ClothoidAsyPlot.hh',
			'Clothoid.hh',
			'ClothoidList.hh',
			'CubicRootsFlocke.hh',
			'Fresnel.hh',
			'G2lib.hh',
			'Line.hh',
			'PolyLine.hh',
			'Triangle2D.hh'], subdir: 'Clothoids')


lib_so = shared_library('Clothoids',
	                lib_sources,
	                include_directories : inc,
	                version: meson.project_version(),
	                install : true)

lib = declare_dependency(include_directories : inc, link_with: lib_so, version: meson.project_version())

#####################
### Generate pkg-config file
#####################
pkg_mod = import('pkgconfig')
pkg_mod.generate(lib_so,
	         version: meson.project_version(),
	         name : 'libClothoids',
	         filebase : 'Clothoids',
	         subdirs: 'Clothoids',
	         description : 'G1 and G2 fitting with clothoids, spline of clothods, circle arc and biarc')
