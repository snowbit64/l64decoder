// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: clone
// Entry Point: 00a5d2f0
// Size: 260 bytes
// Signature: undefined clone(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* UserAttribute::clone() */

void ** UserAttribute::clone(void)

{
  undefined4 uVar1;
  undefined uVar2;
  char **in_x0;
  void **ppvVar3;
  size_t sVar4;
  void *pvVar5;
  char *pcVar6;
  ulong uVar7;
  undefined4 uVar8;
  
  ppvVar3 = (void **)operator_new(0x10);
  uVar8 = *(undefined4 *)(in_x0 + 1);
  *ppvVar3 = (void *)0x0;
  *(undefined4 *)(ppvVar3 + 1) = uVar8;
  switch(uVar8) {
  case 0:
    uVar2 = *(undefined *)in_x0;
    *(undefined4 *)(ppvVar3 + 1) = 0;
    *(undefined *)ppvVar3 = uVar2;
    break;
  case 1:
    uVar8 = 1;
    goto LAB_00a5d3d4;
  case 2:
    uVar8 = *(undefined4 *)in_x0;
    *(undefined4 *)(ppvVar3 + 1) = 2;
    *(undefined4 *)ppvVar3 = uVar8;
    break;
  case 3:
    pcVar6 = *in_x0;
    sVar4 = strlen(pcVar6);
    uVar7 = (ulong)((int)sVar4 + 1);
    pvVar5 = operator_new__(uVar7);
    *ppvVar3 = pvVar5;
    memcpy(pvVar5,pcVar6,uVar7);
    *(undefined4 *)(ppvVar3 + 1) = 3;
    break;
  case 4:
    pcVar6 = *in_x0;
    sVar4 = strlen(pcVar6);
    uVar7 = (ulong)((int)sVar4 + 1);
    pvVar5 = operator_new__(uVar7);
    *ppvVar3 = pvVar5;
    memcpy(pvVar5,pcVar6,uVar7);
    *(undefined4 *)(ppvVar3 + 1) = 4;
    break;
  case 5:
    uVar8 = 5;
LAB_00a5d3d4:
    uVar1 = *(undefined4 *)in_x0;
    *(undefined4 *)(ppvVar3 + 1) = uVar8;
    *(undefined4 *)ppvVar3 = uVar1;
    break;
  default:
    return ppvVar3;
  }
  return ppvVar3;
}


