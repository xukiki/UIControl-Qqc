Pod::Spec.new do |s|

  s.license      = "MIT"
  s.author       = { "qqc" => "20599378@qq.com" }
  s.platform     = :ios, "8.0"
  s.requires_arc  = true

  s.name         = "UIControl-Qqc"
  s.version      = "1.0.10"
  s.summary      = "UIControl-Qqc"
  s.homepage     = "https://github.com/xukiki/UIControl-Qqc"
  s.source       = { :git => "https://github.com/xukiki/UIControl-Qqc.git", :tag => "#{s.version}" }
  
  s.source_files  = ["UIControl-Qqc/*.{h,m}"]

end
