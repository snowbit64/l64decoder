// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ParseDeep
// Entry Point: 00dfd078
// Size: 224 bytes
// Signature: undefined __thiscall ParseDeep(XMLDeclaration * this, char * param_1, StrPair * param_2, int * param_3)


/* tinyxml2::XMLDeclaration::ParseDeep(char*, tinyxml2::StrPair*, int*) */

char * __thiscall
tinyxml2::XMLDeclaration::ParseDeep
          (XMLDeclaration *this,char *param_1,StrPair *param_2,int *param_3)

{
  int iVar1;
  char cVar2;
  char *pcVar3;
  
  cVar2 = *param_1;
  if (cVar2 != '\0') {
    pcVar3 = param_1 + 2;
    do {
      if (cVar2 == '\n') {
        *param_3 = *param_3 + 1;
      }
      else if (cVar2 == '?') {
        iVar1 = strncmp(pcVar3 + -2,"?>",2);
        if (iVar1 == 0) {
          if ((((byte)this[0x19] >> 1 & 1) != 0) && (*(void **)(this + 0x20) != (void *)0x0)) {
            operator_delete__(*(void **)(this + 0x20));
          }
          *(char **)(this + 0x20) = param_1;
          *(char **)(this + 0x28) = pcVar3 + -2;
          *(undefined4 *)(this + 0x18) = 0x102;
          return pcVar3;
        }
      }
      cVar2 = pcVar3[-1];
      pcVar3 = pcVar3 + 1;
    } while (cVar2 != '\0');
  }
  XMLDocument::SetError
            ((XMLError)*(undefined8 *)(this + 8),0xb,(char *)(ulong)*(uint *)(this + 0x30),0);
  return (char *)0x0;
}


