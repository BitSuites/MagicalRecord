
Pod::Spec.new do |s|
  s.default_subspec = 'Core'
  s.name     = 'BPMagicalRecord'
  s.version  = '2.4'
  s.license  = 'MIT'
  s.summary  = 'Super Awesome Easy Fetching for Core Data 1!!!11!!!!1!.'
  s.homepage = 'http://github.com/magicalpanda/MagicalRecord'
  s.author   = { 'Saul Mora' => 'saul@magicalpanda.com', 'Tony Arnold' => 'tony@thecocoabots.com' }
  s.source   = { :git => 'https://github.com/BitSuites/MagicalRecord.git' }
  s.description  = 'Handy fetching, threading and data import helpers to make Core Data a little easier to use.'
  s.requires_arc = true
  s.ios.deployment_target = '9.0'

  s.subspec 'Core' do |sp|
    sp.framework    = 'CoreData'
    sp.header_dir   = 'MagicalRecord'
    sp.source_files = 'MagicalRecord/**/*.{h,m}'
    sp.prefix_header_contents = <<-EOS
    #import <CoreData/CoreData.h>
    #import <BPMagicalRecord/MagicalRecord.h>
    EOS
  end

end
