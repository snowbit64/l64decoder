// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: trim
// Entry Point: 00b9b8bc
// Size: 292 bytes
// Signature: undefined __thiscall trim(StringUtil * this, char * param_1)


/* StringUtil::trim(char const*) */

void __thiscall StringUtil::trim(StringUtil *this,char *param_1)

{
  StringUtil *pSVar1;
  StringUtil SVar2;
  uint uVar3;
  int iVar4;
  ulong *in_x8;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  ulong uVar9;
  ulong uVar5;
  
  if ((this == (StringUtil *)0x0) || (SVar2 = *this, SVar2 == (StringUtil)0x0)) {
LAB_00b9b91c:
    pcVar8 = (char *)((long)in_x8 + 1);
    *(char *)in_x8 = '\0';
    goto LAB_00b9b920;
  }
  uVar5 = 1;
  uVar3 = 1;
  while ((byte)SVar2 < 0x21) {
    uVar3 = (uint)uVar5;
    if ((1L << ((ulong)(byte)SVar2 & 0x3f) & 0x100002600U) == 0) {
      if ((ulong)(byte)SVar2 == 0) goto LAB_00b9b91c;
      break;
    }
    pSVar1 = this + uVar5;
    uVar3 = uVar3 + 1;
    uVar5 = (ulong)uVar3;
    SVar2 = *pSVar1;
  }
  iVar6 = 0;
  do {
    uVar7 = uVar3 + iVar6;
    iVar6 = iVar6 + 1;
  } while (this[uVar7] != (StringUtil)0x0);
  iVar4 = -iVar6;
  uVar7 = (uVar3 + iVar6) - 2;
  while ((byte)this[uVar7] < 0x21 && (1L << ((ulong)(byte)this[uVar7] & 0x3f) & 0x100002600U) != 0)
  {
    iVar4 = iVar4 + 1;
    uVar7 = uVar7 - 1;
  }
  uVar5 = (ulong)(uint)-iVar4;
  if ((uint)-iVar4 < 0x17) {
    pcVar8 = (char *)((long)in_x8 + 1);
    *(char *)in_x8 = (char)iVar4 * -2;
    if (iVar4 != 0) goto LAB_00b9b9c8;
  }
  else {
    uVar9 = uVar5 + 0x10 & 0x1fffffff0;
    pcVar8 = (char *)operator_new(uVar9);
    in_x8[1] = uVar5;
    in_x8[2] = (ulong)pcVar8;
    *in_x8 = uVar9 | 1;
LAB_00b9b9c8:
    memcpy(pcVar8,this + (uVar3 - 1),uVar5);
  }
  pcVar8 = pcVar8 + uVar5;
LAB_00b9b920:
  *pcVar8 = '\0';
  return;
}


