// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: ParseDeep
// Entry Point: 00e00034
// Size: 456 bytes
// Signature: undefined __thiscall ParseDeep(XMLElement * this, char * param_1, StrPair * param_2, int * param_3)


/* tinyxml2::XMLElement::ParseDeep(char*, tinyxml2::StrPair*, int*) */

char * __thiscall
tinyxml2::XMLElement::ParseDeep(XMLElement *this,char *param_1,StrPair *param_2,int *param_3)

{
  byte bVar1;
  char *pcVar2;
  uint uVar3;
  byte *pbVar4;
  
  if (-1 < *param_1) {
    uVar3 = (uint)(byte)*param_1;
    if (param_3 == (int *)0x0) {
      do {
        if ((uVar3 != 0x20) && (4 < uVar3 - 9)) goto LAB_00e000c4;
        param_1 = (char *)((byte *)param_1 + 1);
        uVar3 = (uint)(byte)*param_1;
      } while (-1 < *param_1);
    }
    else {
      do {
        if ((uVar3 != 0x20) && (4 < uVar3 - 9)) goto LAB_00e000c4;
        if (uVar3 == 10) {
          *param_3 = *param_3 + 1;
        }
        param_1 = (char *)((byte *)param_1 + 1);
        uVar3 = (uint)(byte)*param_1;
      } while (-1 < *param_1);
    }
  }
LAB_00e00104:
  pbVar4 = (byte *)param_1 + 1;
  bVar1 = *pbVar4;
  while ((bVar1 != 0 &&
         ((((uVar3 = (uint)bVar1, (char)bVar1 < '\0' || (0xffffffe5 < (uVar3 & 0xdf) - 0x5b)) ||
           ((uVar3 == 0x3a || ((uVar3 == 0x5f || (uVar3 - 0x2d < 2)))))) || (uVar3 - 0x30 < 10)))))
  {
    pbVar4 = pbVar4 + 1;
    bVar1 = *pbVar4;
  }
  if ((((byte)this[0x19] >> 1 & 1) != 0) && (*(void **)(this + 0x20) != (void *)0x0)) {
    operator_delete__(*(void **)(this + 0x20));
  }
  *(char **)(this + 0x20) = param_1;
  *(byte **)(this + 0x28) = pbVar4;
  *(undefined4 *)(this + 0x18) = 0x100;
  if (*(long *)(this + 0x20) == *(long *)(this + 0x28)) {
    return (char *)0x0;
  }
LAB_00e00188:
  pcVar2 = (char *)ParseAttributes(this,(char *)pbVar4,param_3);
  if (((pcVar2 != (char *)0x0) && (*pcVar2 != '\0')) && (*(int *)(this + 0x68) == 0)) {
    pcVar2 = (char *)XMLNode::ParseDeep((XMLNode *)this,pcVar2,param_2,param_3);
    return pcVar2;
  }
  return pcVar2;
LAB_00e000c4:
  if (uVar3 == 0x2f) {
    *(undefined4 *)(this + 0x68) = 2;
    param_1 = (char *)((byte *)param_1 + 1);
    uVar3 = (uint)(byte)*param_1;
  }
  if ((uVar3 == 0) ||
     ((((uVar3 >> 7 == 0 && ((uVar3 & 0xdf) - 0x5b < 0xffffffe6)) && (uVar3 != 0x5f)) &&
      (uVar3 != 0x3a)))) {
    pbVar4 = (byte *)0x0;
    if (*(long *)(this + 0x20) == *(long *)(this + 0x28)) {
      return (char *)0x0;
    }
    goto LAB_00e00188;
  }
  goto LAB_00e00104;
}


