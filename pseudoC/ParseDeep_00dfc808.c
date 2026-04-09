// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ParseDeep
// Entry Point: 00dfc808
// Size: 384 bytes
// Signature: undefined __thiscall ParseDeep(XMLText * this, char * param_1, StrPair * param_2, int * param_3)


/* tinyxml2::XMLText::ParseDeep(char*, tinyxml2::StrPair*, int*) */

char * __thiscall
tinyxml2::XMLText::ParseDeep(XMLText *this,char *param_1,StrPair *param_2,int *param_3)

{
  uint uVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  long lVar5;
  uint uVar6;
  char *pcVar7;
  
  if (this[0x68] == (XMLText)0x0) {
    lVar5 = *(long *)(this + 8);
    cVar3 = *param_1;
    uVar6 = 2;
    if (*(char *)(lVar5 + 0x69) != '\0') {
      uVar6 = 3;
    }
    pcVar7 = param_1;
    uVar1 = uVar6 | 4;
    if (*(int *)(lVar5 + 0x70) != 1) {
      uVar1 = uVar6;
    }
    while (cVar3 != '\0') {
      if (cVar3 == '\n') {
        *param_3 = *param_3 + 1;
      }
      else if (cVar3 == '<') {
        if ((((byte)this[0x19] >> 1 & 1) != 0) && (*(void **)(this + 0x20) != (void *)0x0)) {
          operator_delete__(*(void **)(this + 0x20));
        }
        *(char **)(this + 0x20) = param_1;
        *(char **)(this + 0x28) = pcVar7;
        *(uint *)(this + 0x18) = uVar1 | 0x100;
        pcVar2 = (char *)0x0;
        if (pcVar7[1] != '\0') {
          pcVar2 = pcVar7;
        }
        return pcVar2;
      }
      cVar3 = pcVar7[1];
      pcVar7 = pcVar7 + 1;
    }
    uVar6 = *(uint *)(this + 0x30);
    iVar4 = 8;
  }
  else {
    cVar3 = *param_1;
    pcVar7 = param_1;
    while (cVar3 != '\0') {
      if (cVar3 == '\n') {
        *param_3 = *param_3 + 1;
      }
      else if ((cVar3 == ']') && (iVar4 = strncmp(pcVar7,"]]>",3), iVar4 == 0)) {
        if ((((byte)this[0x19] >> 1 & 1) != 0) && (*(void **)(this + 0x20) != (void *)0x0)) {
          operator_delete__(*(void **)(this + 0x20));
        }
        *(char **)(this + 0x20) = param_1;
        *(char **)(this + 0x28) = pcVar7;
        *(undefined4 *)(this + 0x18) = 0x102;
        return pcVar7 + 3;
      }
      pcVar7 = pcVar7 + 1;
      cVar3 = *pcVar7;
    }
    lVar5 = *(long *)(this + 8);
    iVar4 = 9;
    uVar6 = *(uint *)(this + 0x30);
  }
  XMLDocument::SetError((XMLError)lVar5,iVar4,(char *)(ulong)uVar6,0);
  return (char *)0x0;
}


