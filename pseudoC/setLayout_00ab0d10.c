// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: setLayout
// Entry Point: 00ab0d10
// Size: 188 bytes
// Signature: undefined __thiscall setLayout(VulkanTextureObject * this, LAYOUT param_1, uint param_2, uint param_3)


/* VulkanTextureObject::setLayout(VulkanTextureObject::LAYOUT, unsigned int, unsigned int) */

void __thiscall
VulkanTextureObject::setLayout(VulkanTextureObject *this,LAYOUT param_1,uint param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  LAYOUT *pLVar14;
  
  iVar4 = *(int *)(this + 0x48);
  uVar2 = 0;
  if (param_2 != 0xffffffff) {
    uVar2 = param_2;
  }
  uVar8 = (ulong)uVar2;
  if (param_2 != 0xffffffff) {
    iVar4 = 1;
  }
  uVar3 = 0;
  if (param_3 != 0xffffffff) {
    uVar3 = param_3;
  }
  uVar9 = (ulong)uVar3;
  iVar10 = 1;
  if (param_3 == 0xffffffff) {
    iVar10 = *(int *)(this + 0x38) + 1;
  }
  if (uVar2 < iVar4 + uVar2) {
    uVar1 = iVar10 + uVar3;
    uVar11 = uVar1 - uVar9;
    uVar12 = uVar11 & 0xfffffffffffffff8;
    do {
      if (uVar3 < uVar1) {
        lVar13 = *(long *)(*(long *)(this + 0x90) + uVar8 * 0x18);
        uVar6 = uVar9;
        if (7 < uVar11) {
          puVar5 = (undefined8 *)(lVar13 + (uVar9 + 4) * 4);
          uVar6 = uVar12;
          do {
            puVar5[-1] = CONCAT44(param_1,param_1);
            puVar5[-2] = CONCAT44(param_1,param_1);
            puVar5[1] = CONCAT44(param_1,param_1);
            *puVar5 = CONCAT44(param_1,param_1);
            uVar6 = uVar6 - 8;
            puVar5 = puVar5 + 4;
          } while (uVar6 != 0);
          uVar6 = uVar12 + uVar9;
          if (uVar11 == uVar12) goto LAB_00ab0d60;
        }
        lVar7 = uVar1 - uVar6;
        pLVar14 = (LAYOUT *)(lVar13 + uVar6 * 4);
        do {
          lVar7 = lVar7 + -1;
          *pLVar14 = param_1;
          pLVar14 = pLVar14 + 1;
        } while (lVar7 != 0);
      }
LAB_00ab0d60:
      uVar8 = uVar8 + 1;
    } while (uVar8 != iVar4 + uVar2);
  }
  return;
}


