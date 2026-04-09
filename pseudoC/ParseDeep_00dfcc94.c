// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ParseDeep
// Entry Point: 00dfcc94
// Size: 212 bytes
// Signature: undefined __thiscall ParseDeep(XMLComment * this, char * param_1, StrPair * param_2, int * param_3)


/* tinyxml2::XMLComment::ParseDeep(char*, tinyxml2::StrPair*, int*) */

char * __thiscall
tinyxml2::XMLComment::ParseDeep(XMLComment *this,char *param_1,StrPair *param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  char *__s1;
  
  cVar1 = *param_1;
  __s1 = param_1;
  do {
    if (cVar1 == '\0') {
      XMLDocument::SetError
                ((XMLError)*(undefined8 *)(this + 8),10,(char *)(ulong)*(uint *)(this + 0x30),0);
      return (char *)0x0;
    }
    if (cVar1 == '\n') {
      *param_3 = *param_3 + 1;
    }
    else if ((cVar1 == '-') && (iVar2 = strncmp(__s1,"-->",3), iVar2 == 0)) {
      if ((((byte)this[0x19] >> 1 & 1) != 0) && (*(void **)(this + 0x20) != (void *)0x0)) {
        operator_delete__(*(void **)(this + 0x20));
      }
      *(char **)(this + 0x20) = param_1;
      *(char **)(this + 0x28) = __s1;
      *(undefined4 *)(this + 0x18) = 0x102;
      return __s1 + 3;
    }
    __s1 = __s1 + 1;
    cVar1 = *__s1;
  } while( true );
}


