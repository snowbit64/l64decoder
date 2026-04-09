// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadIncludeFile
// Entry Point: 00b92dcc
// Size: 152 bytes
// Signature: undefined __thiscall loadIncludeFile(Preprocessor * this, basic_string * param_1, bool param_2, char * param_3, char * * param_4)


/* Preprocessor::loadIncludeFile(std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&, bool, char const*, char*&) */

undefined4 __thiscall
Preprocessor::loadIncludeFile
          (Preprocessor *this,basic_string *param_1,bool param_2,char *param_3,char **param_4)

{
  char cVar1;
  ulong uVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  
  *param_4 = (char *)0x0;
  if (*(code **)(this + 0x40) != (code *)0x0) {
    uVar2 = (**(code **)(this + 0x40))(param_1,param_2,param_3,param_4);
    pcVar3 = *param_4;
    pcVar5 = pcVar3;
    if ((uVar2 & 1) != 0) {
      do {
        cVar1 = *pcVar5;
        pcVar4 = pcVar3;
        if (cVar1 != '\r') {
          if (cVar1 == '\0') {
            *pcVar3 = '\0';
            return 1;
          }
          pcVar4 = pcVar3 + 1;
          *pcVar3 = cVar1;
        }
        pcVar3 = pcVar4;
        pcVar5 = pcVar5 + 1;
      } while( true );
    }
    if (pcVar3 != (char *)0x0) {
      operator_delete__(pcVar3);
    }
    *param_4 = (char *)0x0;
  }
  return 0;
}


