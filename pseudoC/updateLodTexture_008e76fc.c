// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateLodTexture
// Entry Point: 008e76fc
// Size: 308 bytes
// Signature: undefined __thiscall updateLodTexture(BaseTerrain * this, IRenderDevice * param_1, bool param_2)


/* BaseTerrain::updateLodTexture(IRenderDevice*, bool) */

void __thiscall BaseTerrain::updateLodTexture(BaseTerrain *this,IRenderDevice *param_1,bool param_2)

{
  long lVar1;
  undefined8 uVar2;
  long *plVar3;
  void *local_98;
  uint local_90;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  TerrainLodTexture::updateLodTexture
            (*(IRenderDevice **)(this + 0xd8),SUB81(param_1,0),(BaseTerrain *)(ulong)param_2);
  if (this[0x108] != (BaseTerrain)0x0) {
    if (*(long *)(this + 0x100) != 0) {
      plVar3 = *(long **)(*(long *)(this + 0x100) + 0x68);
      uVar2 = (**(code **)(*(long *)param_1 + 0x138))(param_1);
      (**(code **)(*plVar3 + 0x68))
                (plVar3,uVar2,0,0,0,0,*(int *)(this + 0x90) + -1,*(int *)(this + 0x90) + -1,0,1,1,
                 &local_98);
      PixelFormatUtil::convertPixelFormat
                (*(void **)(this + 0xe0),0,0,2,local_98,local_90,0,2,*(int *)(this + 0x90) - 1U,
                 *(int *)(this + 0x90) - 1U,1);
      uVar2 = (**(code **)(*(long *)param_1 + 0x138))(param_1);
      (**(code **)(*plVar3 + 0x70))(plVar3,uVar2,&local_98);
    }
    this[0x108] = (BaseTerrain)0x0;
  }
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


