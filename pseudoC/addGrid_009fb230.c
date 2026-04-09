// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addGrid
// Entry Point: 009fb230
// Size: 388 bytes
// Signature: undefined __thiscall addGrid(DeferredDebugRenderer * this, int param_1, float param_2)


/* DeferredDebugRenderer::addGrid(int, float) */

void __thiscall
DeferredDebugRenderer::addGrid(DeferredDebugRenderer *this,int param_1,float param_2)

{
  int iVar1;
  int iVar2;
  long lVar3;
  float *pfVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  float local_90;
  undefined4 local_8c;
  float local_88;
  float local_84;
  undefined4 local_80;
  float local_7c;
  long local_78;
  
  lVar3 = tpidr_el0;
  local_78 = *(long *)(lVar3 + 0x28);
  if (((byte)this[0x2a0] >> 5 & 1) != 0) {
    if (param_1 < 0) {
      param_1 = param_1 + 1;
    }
    local_80 = 0;
    iVar2 = param_1 >> 1;
    local_8c = 0;
    iVar5 = -iVar2;
    fVar7 = (float)iVar2 * param_2;
    fVar6 = (float)iVar5 * param_2;
    local_88 = fVar6;
    local_7c = fVar7;
    if (iVar5 == iVar2 || iVar2 * -2 < 0 != SBORROW4(iVar5,iVar2)) {
      iVar1 = iVar5;
      do {
        local_90 = (float)iVar1 * param_2;
        pfVar4 = (float *)&DAT_0051b1a8;
        if (iVar1 != 0) {
          pfVar4 = (float *)&DAT_0051b198;
        }
        local_84 = local_90;
        addLine(this,&local_84,pfVar4,&local_90,pfVar4,0x20);
        iVar1 = iVar1 + 1;
      } while (iVar2 + 1 != iVar1);
      local_90 = fVar6;
      local_84 = fVar7;
      if (iVar5 == iVar2 || iVar2 * -2 < 0 != SBORROW4(iVar5,iVar2)) {
        do {
          local_88 = (float)iVar5 * param_2;
          pfVar4 = (float *)&DAT_0051b1a8;
          if (iVar5 != 0) {
            pfVar4 = (float *)&DAT_0051b198;
          }
          local_7c = local_88;
          addLine(this,&local_84,pfVar4,&local_90,pfVar4,0x20);
          iVar5 = iVar5 + 1;
        } while (iVar2 + 1 != iVar5);
      }
    }
  }
  if (*(long *)(lVar3 + 0x28) != local_78) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


