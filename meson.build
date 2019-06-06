project('libClothoids', ['cpp'],
        version: '1.0.0',
  meson_version: '>= 0.47.0',
)

add_project_arguments(['-std=c++17', '-Wall', '-Werror', '-Wno-unused-function', '-Wno-sign-compare'], language : ['cpp'])

inc  = [include_directories('src')]

subdir('src')
subdir('tests-cpp')

