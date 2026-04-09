// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: BringOutYourDead
// Entry Point: 00f9f39c
// Size: 608 bytes
// Signature: undefined __thiscall BringOutYourDead(HullLibrary * this, btVector3 * param_1, uint param_2, btVector3 * param_3, uint * param_4, uint * param_5, uint param_6)


/* HullLibrary::BringOutYourDead(btVector3 const*, unsigned int, btVector3*, unsigned int&, unsigned
   int*, unsigned int) */

void __thiscall
HullLibrary::BringOutYourDead
          (HullLibrary *this,btVector3 *param_1,uint param_2,btVector3 *param_3,uint *param_4,
          uint *param_5,uint param_6)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  void *__s;
  void *__s_00;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  uint uVar9;
  size_t sVar10;
  
  if ((int)*(uint *)(this + 0x24) < 1) {
    __s = (void *)0x0;
  }
  else {
    sVar10 = (ulong)*(uint *)(this + 0x24) << 2;
    gNumAlignedAllocs = gNumAlignedAllocs + 1;
    __s = (void *)(*(code *)PTR_FUN_01048e38)(sVar10,0x10);
    memset(__s,0,sVar10);
    if (0 < *(int *)(this + 0x24)) {
      lVar4 = 0;
      lVar6 = *(long *)(this + 0x30);
      do {
        lVar7 = lVar4 * 4;
        lVar4 = lVar4 + 1;
        *(undefined4 *)((long)__s + lVar7) = *(undefined4 *)(lVar6 + lVar7);
      } while (lVar4 < *(int *)(this + 0x24));
    }
  }
  sVar10 = (ulong)param_2 << 2;
  if ((int)param_2 < 1) {
    memset((void *)0x0,0,sVar10);
    *param_4 = 0;
    if ((int)param_6 < 1) goto LAB_00f9f4cc;
    __s_00 = (void *)0x0;
LAB_00f9f530:
    uVar5 = 0;
    do {
      uVar3 = param_5[uVar5];
      iVar8 = *(int *)((long)__s_00 + (long)(int)uVar3 * 4);
      if (iVar8 == 0) {
        param_5[uVar5] = *param_4;
        puVar1 = (undefined4 *)(param_1 + (ulong)uVar3 * 0x10);
        uVar9 = *param_4;
        iVar8 = *(int *)(this + 0x24);
        puVar2 = (undefined4 *)(param_3 + (ulong)uVar9 * 0x10);
        *puVar2 = *puVar1;
        puVar2[1] = puVar1[1];
        puVar2[2] = puVar1[2];
        if (0 < iVar8) {
          lVar4 = 0;
          lVar6 = *(long *)(this + 0x30);
          do {
            if (*(uint *)((long)__s + lVar4 * 4) == uVar3) {
              *(uint *)(lVar6 + lVar4 * 4) = *param_4;
              iVar8 = *(int *)(this + 0x24);
            }
            lVar4 = lVar4 + 1;
          } while (lVar4 < iVar8);
          uVar9 = *param_4;
        }
        *param_4 = uVar9 + 1;
        *(uint *)((long)__s_00 + (long)(int)uVar3 * 4) = uVar9 + 1;
      }
      else {
        param_5[uVar5] = iVar8 - 1;
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 != param_6);
  }
  else {
    gNumAlignedAllocs = gNumAlignedAllocs + 1;
    __s_00 = (void *)(*(code *)PTR_FUN_01048e38)(sVar10,0x10);
    memset(__s_00,0,sVar10);
    *param_4 = 0;
    if (0 < (int)param_6) goto LAB_00f9f530;
    if (__s_00 == (void *)0x0) goto LAB_00f9f4cc;
  }
  gNumAlignedFree = gNumAlignedFree + 1;
  (*(code *)PTR_FUN_01048e40)(__s_00);
LAB_00f9f4cc:
  if (__s == (void *)0x0) {
    return;
  }
  gNumAlignedFree = gNumAlignedFree + 1;
                    /* WARNING: Could not recover jumptable at 0x00f9f500. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)PTR_FUN_01048e40)(__s);
  return;
}


