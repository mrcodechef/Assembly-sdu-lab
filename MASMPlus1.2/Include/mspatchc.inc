  ; ===========================================
  ; mspatchc.inc copyright MASM32 1998 - 2003
  ; ===========================================

CreatePatchFileA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreatePatchFile equ <CreatePatchFileA>

CreatePatchFileByHandles PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreatePatchFileByHandlesEx PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreatePatchFileExA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreatePatchFileEx equ <CreatePatchFileExA>

CreatePatchFileExW PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
CreatePatchFileW PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD
ExtractPatchHeaderToFileA PROTO :DWORD,:DWORD
ExtractPatchHeaderToFile equ <ExtractPatchHeaderToFileA>

ExtractPatchHeaderToFileByHandles PROTO :DWORD,:DWORD
ExtractPatchHeaderToFileW PROTO :DWORD,:DWORD
GetFilePatchSignatureA PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetFilePatchSignature equ <GetFilePatchSignatureA>

GetFilePatchSignatureByHandle PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
GetFilePatchSignatureW PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
