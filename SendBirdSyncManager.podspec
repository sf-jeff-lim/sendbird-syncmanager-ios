Pod::Spec.new do |s|
  s.name         = "SendBirdSyncManager"
  s.version      = "1.1.29"
  s.summary      = "Local cache framework based on SendBirdSDK"
  s.description  = "SendBirdSyncManager caches and manages channels and messages of SendBirdSDK"
  s.homepage     = "https://sendbird.com"
  s.documentation_url = 'https://docs.sendbird.com/ios'
  s.license      = "Commercial"
  s.authors      		 = { "Jed Gyeong" => "jed.gyeong@sendbird.com", "Young Hwang" => "young.hwang@sendbird.com", "Tez Park" => "tez.park@sendbird.com" }
  s.platform     = :ios, "8.0"
  s.source       = { :git => "https://github.com/sendbird/sendbird-syncmanager-ios.git", :tag => "v#{s.version}" }
  s.ios.vendored_frameworks = "SendBirdSyncManager.framework"
  s.ios.frameworks = ["UIKit", "Foundation", "CoreData", "SendBirdSDK"]
  s.requires_arc = true
  s.dependency "SendBirdSDK", "~> 3.0.178"
  s.ios.library = "icucore"
end
