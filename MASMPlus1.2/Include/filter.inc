  ; ===========================================
  ; filter.inc copyright MASM32 1998 - 2003
  ; ===========================================

CreateFilter PROTO 
DestroyFilter PROTO :DWORD
DisableParserFilter PROTO :DWORD,:DWORD
EnableParserFilter PROTO :DWORD,:DWORD
FilterAddObject PROTO :DWORD,:DWORD
FilterDuplicate PROTO :DWORD
FilterFindFrame PROTO :DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD,:DWORD
FilterFlushBits PROTO :DWORD
FilterFrame PROTO :DWORD,:DWORD,:DWORD
GetCurrentFilter PROTO 
SetCurrentFilter PROTO :DWORD
_CreateFilter PROTO 
