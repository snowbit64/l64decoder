// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: addImpression
// Entry Point: 00af2e84
// Size: 364 bytes
// Signature: undefined __thiscall addImpression(GiantsAdsProvider * this, GiantsAdPlacement * param_1)


/* GiantsAdsProvider::addImpression(GiantsAdPlacement*) */

void __thiscall GiantsAdsProvider::addImpression(GiantsAdsProvider *this,GiantsAdPlacement *param_1)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  long lVar9;
  double dVar10;
  ulonglong local_78;
  uint local_6c;
  undefined8 *local_68;
  uint local_60;
  uint local_5c;
  long local_58;
  
  lVar4 = tpidr_el0;
  local_58 = *(long *)(lVar4 + 0x28);
  *(int *)(this + 0x1c8) = *(int *)(this + 0x1c8) + 1;
  if (this[0xd0] == (GiantsAdsProvider)0x0) {
    if (this[0x1b9] == (GiantsAdsProvider)0x0) {
      uVar5 = Watch::getCurrentTicks();
      *(undefined8 *)(this + 0x1c0) = uVar5;
      this[0x1b9] = (GiantsAdsProvider)0x1;
    }
    uVar7 = *(ulong *)(this + 0xf0);
    uVar8 = (uint)(uVar7 >> 0x20);
    uVar1 = uVar8 >> 0xd ^ (uint)(uVar7 >> 0x1b);
    uVar8 = uVar8 >> 0x1b;
    uVar3 = uVar1 >> uVar8 | uVar1 << 0x20 - uVar8;
    *(ulong *)(this + 0xf0) = uVar7 * 0x5851f42d4c957f2d + -0x2152ecc841109800;
    local_5c = uVar3;
    Mutex::enterCriticalSection();
    uVar1 = *(uint *)param_1;
    uVar8 = *(uint *)(param_1 + 0x14);
    lVar9 = *(long *)(this + 0x188);
    local_6c = uVar8;
    local_68 = (undefined8 *)(param_1 + 4);
    local_60 = uVar1;
    lVar6 = Watch::getCurrentTicks();
    dVar10 = (double)Watch::convertTicksToMs(lVar6 - *(long *)(this + 400));
    puVar2 = *(uint **)(this + 0x1a8);
    local_78 = lVar9 + (long)dVar10;
    if (puVar2 < *(uint **)(this + 0x1b0)) {
      *puVar2 = uVar1;
      puVar2[5] = uVar8;
      puVar2[6] = uVar3;
      *(ulonglong *)(puVar2 + 8) = local_78;
      uVar5 = *(undefined8 *)(param_1 + 4);
      *(undefined8 *)(puVar2 + 3) = *(undefined8 *)(param_1 + 0xc);
      *(undefined8 *)(puVar2 + 1) = uVar5;
      *(uint **)(this + 0x1a8) = puVar2 + 10;
    }
    else {
      std::__ndk1::
      vector<GiantsAdsProvider::Impression,std::__ndk1::allocator<GiantsAdsProvider::Impression>>::
      __emplace_back_slow_path<unsigned_int,unsigned_char_const*,unsigned_int,unsigned_int&,unsigned_long_long>
                ((vector<GiantsAdsProvider::Impression,std::__ndk1::allocator<GiantsAdsProvider::Impression>>
                  *)(this + 0x1a0),&local_60,(uchar **)&local_68,&local_6c,&local_5c,&local_78);
    }
    Mutex::leaveCriticalSection();
    savePendingImpressions();
  }
  if (*(long *)(lVar4 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


