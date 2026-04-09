// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MultiresTextureGpuUpdater
// Entry Point: 0095f184
// Size: 412 bytes
// Signature: undefined __thiscall MultiresTextureGpuUpdater(MultiresTextureGpuUpdater * this, MultiresTextureGpuUpdaterDesc * param_1, MultiresTexture * param_2)


/* MultiresTextureGpuUpdater::MultiresTextureGpuUpdater(MultiresTextureGpuUpdaterDesc const&,
   MultiresTexture*) */

void __thiscall
MultiresTextureGpuUpdater::MultiresTextureGpuUpdater
          (MultiresTextureGpuUpdater *this,MultiresTextureGpuUpdaterDesc *param_1,
          MultiresTexture *param_2)

{
  uint *this_00;
  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  UniqueTileInfo aUStack_160 [72];
  undefined4 local_118;
  uint uStack_114;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  long local_68;
  
  this_00 = (uint *)(this + 8);
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  *(undefined ***)this = &PTR___cxa_pure_virtual_00fe0510;
  MultiresTextureGpuUpdaterDesc::MultiresTextureGpuUpdaterDesc
            ((MultiresTextureGpuUpdaterDesc *)this_00,param_1);
  *(MultiresTexture **)(this + 0x110) = param_2 + 0x98;
  *(MultiresTexture **)(this + 0x118) = param_2;
  *(undefined8 *)(this + 0x128) = 0;
  *(undefined8 *)(this + 0x120) = 0;
  *(undefined8 *)(this + 0x138) = 0;
  *(undefined8 *)(this + 0x130) = 0;
  *(undefined8 *)(this + 0x148) = 0;
  *(undefined8 *)(this + 0x140) = 0;
                    /* try { // try from 0095f1f4 to 0095f1fb has its CatchHandler @ 0095f32c */
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x150));
                    /* try { // try from 0095f200 to 0095f207 has its CatchHandler @ 0095f324 */
  AdhocShader::AdhocShader((AdhocShader *)(this + 0x250));
  if (*this_00 == 0) {
    lVar3 = *(long *)(this + 0x138);
    uVar2 = 0;
    if (*(long *)(this + 0x140) - lVar3 >> 4 == 0) goto LAB_0095f2d4;
  }
  else {
    uVar5 = 0;
    do {
                    /* try { // try from 0095f21c to 0095f27f has its CatchHandler @ 0095f334 */
      MultiresTexture::UniqueTileInfo::setLocation(aUStack_160,0,0,(SharedTileInfo *)0x0,0,0);
      MultiresTexture::UniqueTileInfo::setLocation(aUStack_160,0,0,(SharedTileInfo *)0x0,0,0);
      uVar5 = uVar5 + 1;
      local_118 = 0;
      uStack_108 = 0;
      local_110 = 0;
      uStack_f8 = 0;
      uStack_100 = 0;
      uStack_e8 = 0;
      local_f0 = 0;
      uStack_d8 = 0;
      uStack_e0 = 0;
      uStack_c8 = 0;
      local_d0 = 0;
      uStack_b8 = 0;
      uStack_c0 = 0;
      uStack_a8 = 0;
      local_b0 = 0;
      uStack_98 = 0;
      uStack_a0 = 0;
      uStack_88 = 0;
      local_90 = 0;
      uStack_78 = 0;
      uStack_80 = 0;
      uStack_114 = uVar5;
      FUN_0095f494(this + 0x120,aUStack_160);
      uVar2 = (ulong)*this_00;
    } while (uVar5 < *this_00);
    lVar3 = *(long *)(this + 0x138);
    uVar4 = *(long *)(this + 0x140) - lVar3 >> 4;
    if (uVar4 < uVar2) {
                    /* try { // try from 0095f2a4 to 0095f2ab has its CatchHandler @ 0095f320 */
      std::__ndk1::
      vector<MultiresTextureGpuUpdater::TileUVs,std::__ndk1::allocator<MultiresTextureGpuUpdater::TileUVs>>
      ::__append((vector<MultiresTextureGpuUpdater::TileUVs,std::__ndk1::allocator<MultiresTextureGpuUpdater::TileUVs>>
                  *)(this + 0x138),uVar2 - uVar4);
      goto LAB_0095f2d4;
    }
    if (uVar4 <= uVar2) goto LAB_0095f2d4;
  }
  *(ulong *)(this + 0x140) = lVar3 + uVar2 * 0x10;
LAB_0095f2d4:
  *(undefined8 *)(this + 0x358) = 0;
  *(undefined8 *)(this + 0x350) = 0;
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


