// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: requestRegion
// Entry Point: 00a039fc
// Size: 148 bytes
// Signature: undefined __thiscall requestRegion(PersistentShadowMap * this, uint param_1, LightSource * param_2, uint param_3, uint param_4)


/* PersistentShadowMap::requestRegion(unsigned int, LightSource const*, unsigned int, unsigned int)
    */

void __thiscall
PersistentShadowMap::requestRegion
          (PersistentShadowMap *this,uint param_1,LightSource *param_2,uint param_3,uint param_4)

{
  PersistentShadowMap *pPVar1;
  uint uVar2;
  long lVar3;
  int local_40 [2];
  LightSource *local_38;
  uint local_30;
  uint uStack_2c;
  long local_28;
  
  lVar3 = tpidr_el0;
  local_28 = *(long *)(lVar3 + 0x28);
  uVar2 = (int)(*(float *)(this + 8) * (float)(ulong)param_1) - 1;
  uVar2 = uVar2 | uVar2 >> 1;
  uVar2 = uVar2 | uVar2 >> 2;
  uVar2 = uVar2 | uVar2 >> 4;
  uVar2 = uVar2 | uVar2 >> 8;
  uVar2 = uVar2 | uVar2 >> 0x10;
  local_40[0] = uVar2 + 1;
  if (uVar2 == 0xffffffff) {
    local_40[0] = 1;
  }
  pPVar1 = this + 0x20;
  if (param_4 != 0xffffffff) {
    pPVar1 = this + 0x38;
  }
  local_38 = param_2;
  local_30 = param_3;
  uStack_2c = param_4;
  FUN_00a03a90(pPVar1,local_40);
  if (*(long *)(lVar3 + 0x28) == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


