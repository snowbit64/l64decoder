// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: remapRegs
// Entry Point: 00c3fd30
// Size: 404 bytes
// Signature: undefined __thiscall remapRegs(IR_Section * this, vector * param_1, IR_RegisterSet * param_2, IR_RegisterSet * param_3)


/* IR_Section::remapRegs(std::__ndk1::vector<int, std::__ndk1::allocator<int> >&, IR_RegisterSet
   const&, IR_RegisterSet&) */

void __thiscall
IR_Section::remapRegs
          (IR_Section *this,vector *param_1,IR_RegisterSet *param_2,IR_RegisterSet *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  IR_Type *pIVar4;
  char *pcVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  uint *puVar9;
  long lVar10;
  
  lVar8 = *(long *)(this + 0x20);
  if (*(long *)(this + 0x28) != lVar8) {
    uVar7 = 0;
    do {
      lVar8 = *(long *)(lVar8 + uVar7 * 8);
      uVar1 = *(uint *)(lVar8 + 4);
      if ((uVar1 & 0xffff) != 0) {
        lVar10 = 0;
        uVar3 = uVar1;
        while( true ) {
          uVar6 = lVar10 + (ulong)(uVar3 >> 0x10) + 2;
          uVar3 = *(uint *)(lVar8 + uVar6 * 4);
          if (-1 < (int)uVar3) {
            iVar2 = *(int *)(*(long *)param_1 + (ulong)uVar3 * 4);
            if (iVar2 == -1) {
              pIVar4 = (IR_Type *)IR_RegisterSet::getRegisterType(param_2,uVar3);
              pcVar5 = (char *)IR_RegisterSet::getRegisterName(param_2,uVar3);
              iVar2 = IR_RegisterSet::allocateReg(param_3,pIVar4,pcVar5);
              *(int *)(*(long *)param_1 + (ulong)uVar3 * 4) = iVar2;
              uVar6 = (ulong)((int)lVar10 + (uint)*(ushort *)(lVar8 + 6) + 2);
            }
            *(int *)(lVar8 + uVar6 * 4) = iVar2;
          }
          if ((uVar1 & 0xffff) - 1 == (int)lVar10) break;
          uVar3 = *(uint *)(lVar8 + 4);
          lVar10 = lVar10 + 1;
        }
      }
      if (0xffff < uVar1) {
        uVar1 = uVar1 >> 0x10;
        puVar9 = (uint *)(lVar8 + 8);
        if (uVar1 < 2) {
          uVar1 = 1;
        }
        uVar6 = (ulong)uVar1;
        do {
          uVar1 = *puVar9;
          if (-1 < (int)uVar1) {
            uVar3 = *(uint *)(*(long *)param_1 + (ulong)uVar1 * 4);
            if (uVar3 == 0xffffffff) {
              pIVar4 = (IR_Type *)IR_RegisterSet::getRegisterType(param_2,uVar1);
              pcVar5 = (char *)IR_RegisterSet::getRegisterName(param_2,uVar1);
              uVar3 = IR_RegisterSet::allocateReg(param_3,pIVar4,pcVar5);
              *(uint *)(*(long *)param_1 + (ulong)uVar1 * 4) = uVar3;
            }
            *puVar9 = uVar3;
          }
          puVar9 = puVar9 + 1;
          uVar6 = uVar6 - 1;
        } while (uVar6 != 0);
      }
      uVar7 = (ulong)((int)uVar7 + 1);
      lVar8 = *(long *)(this + 0x20);
    } while (uVar7 < (ulong)(*(long *)(this + 0x28) - lVar8 >> 3));
  }
  return;
}


