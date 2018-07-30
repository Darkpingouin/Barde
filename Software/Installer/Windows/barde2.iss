; Script generated by the Inno Setup Script Wizard.
; SEE THE DOCUMENTATION FOR DETAILS ON CREATING INNO SETUP SCRIPT FILES!

#define MyAppName "Barde"
#define MyAppVersion "beta"
#define MyAppPublisher "Barde"
#define MyAppIcoName "Barde.ico"
#define MyAppURL "http://www.barde.io/"
#define MyAppExeName "BardeClient.exe"

[Setup]
; NOTE: The value of AppId uniquely identifies this application.
; Do not use the same AppId value in installers for other applications.
; (To generate a new GUID, click Tools | Generate GUID inside the IDE.)
AppId={{BDC6EDD6-5A74-4F81-8AB5-5D27E02D6B63}
AppName={#MyAppName}
AppVersion={#MyAppVersion}
AppVerName={#MyAppName}
AppPublisher={#MyAppPublisher}
AppPublisherURL={#MyAppURL}
AppSupportURL={#MyAppURL}
AppUpdatesURL={#MyAppURL}
DefaultDirName={pf}\{#MyAppName}
DisableProgramGroupPage=yes
OutputBaseFilename=barde_setup
Compression=lzma
SolidCompression=yes

[Languages]
Name: "english"; MessagesFile: "compiler:Default.isl"

[Tasks]
Name: "desktopicon"; Description: "{cm:CreateDesktopIcon}"; GroupDescription: "{cm:AdditionalIcons}"; Flags: unchecked

[Files]
;Source: "C:\Users\Oreo\Documents\GitHub\Barde\Software\Windows\Win32\Release\App\Barde.ico"; DestDir: "{app}\app"; Flags: ignoreversion
Source: "C:\Users\Oreo\Documents\GitHub\Barde\Software\Windows\Win32\Release\App\BardeClient.exe"; DestDir: "{app}\app"; Flags: ignoreversion
Source: "C:\Users\Oreo\Documents\GitHub\Barde\Software\Windows\Win32\Debug\App\lua53.dll"; DestDir: "{app}\app"; Flags: ignoreversion
; Source: "C:\Users\Oreo\Documents\GitHub\Barde\Software\Windows\Win32\Debug\Themes\Dark"; DestDir: "{app}\Themes"; Flags: ignoreversion
; SAMPLES
Source: "C:\Users\Oreo\Documents\GitHub\Barde\Software\Samples\*"; DestDir: "{app}\Samples"; Flags: ignoreversion
Source: "C:\Users\Oreo\Documents\GitHub\Barde\Software\Samples\Drums\*"; DestDir: "{app}\Samples\Drums"; Flags: ignoreversion
                                                                                               



; NOTE: Don't use "Flags: ignoreversion" on any shared system files

[Icons]
;Name: "{commonprograms}\{#MyAppName}"; Filename: "{app}\app\{#MyAppExeName}"; IconFilename: "{app}\app\{#MyAppIcoName}"; Tasks: desktopicon
;Name: "{commondesktop}\{#MyAppName}"; Filename: "{app}\app\{#MyAppExeName}"; IconFilename: "{app}\app\{#MyAppIcoName}"; Tasks: desktopicon

[Run]
Filename: "{app}\app\{#MyAppExeName}"; Description: "{cm:LaunchProgram,{#StringChange(MyAppName, '&', '&&')}}"; Flags: nowait postinstall skipifsilent

