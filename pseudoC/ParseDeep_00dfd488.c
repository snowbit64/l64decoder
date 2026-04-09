// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ParseDeep
// Entry Point: 00dfd488
// Size: 176 bytes
// Signature: undefined __thiscall ParseDeep(XMLUnknown * this, char * param_1, StrPair * param_2, int * param_3)


/* tinyxml2::XMLUnknown::ParseDeep(char*, tinyxml2::StrPair*, int*) */

char * __thiscall
tinyxml2::XMLUnknown::ParseDeep(XMLUnknown *this,char *param_1,StrPair *param_2,int *param_3)

{
  char cVar1;
  char *pcVar2;
  
  cVar1 = *param_1;
  if (cVar1 != '\0') {
    pcVar2 = param_1 + 1;
    do {
      if (cVar1 == '\n') {
        *param_3 = *param_3 + 1;
      }
      else if (cVar1 == '>') {
        if ((((byte)this[0x19] >> 1 & 1) != 0) && (*(void **)(this + 0x20) != (void *)0x0)) {
          operator_delete__(*(void **)(this + 0x20));
        }
        *(char **)(this + 0x20) = param_1;
        *(char **)(this + 0x28) = pcVar2 + -1;
        *(undefined4 *)(this + 0x18) = 0x102;
        return pcVar2;
      }
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
  }
  XMLDocument::SetError
            ((XMLError)*(undefined8 *)(this + 8),0xc,(char *)(ulong)*(uint *)(this + 0x30),0);
  return (char *)0x0;
}


