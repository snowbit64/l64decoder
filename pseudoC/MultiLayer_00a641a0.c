// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: MultiLayer
// Entry Point: 00a641a0
// Size: 116 bytes
// Signature: undefined __thiscall MultiLayer(MultiLayer * this, MultiLayer * param_1)


/* FoliageSystemDesc::MultiLayer::MultiLayer(FoliageSystemDesc::MultiLayer const&) */

ulong __thiscall FoliageSystemDesc::MultiLayer::MultiLayer(MultiLayer *this,MultiLayer *param_1)

{
  undefined4 uVar1;
  type tVar2;
  ResourceManager *this_00;
  ulong uVar3;
  long lVar4;
  
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  lVar4 = *(long *)param_1;
  if (lVar4 != 0) {
    FUN_00f276d0(1,lVar4 + 8);
  }
                    /* try { // try from 00a641d8 to 00a64203 has its CatchHandler @ 00a64214 */
  this_00 = (ResourceManager *)ResourceManager::getInstance();
  uVar3 = ResourceManager::release(this_00,*(Resource **)this);
  uVar1 = *(undefined4 *)(param_1 + 0x20);
  *(long *)this = lVar4;
  *(undefined4 *)(this + 0x20) = uVar1;
  if (this != param_1) {
    tVar2 = std::__ndk1::
            vector<FoliageSystemDesc::Layer,std::__ndk1::allocator<FoliageSystemDesc::Layer>>::
            assign<FoliageSystemDesc::Layer*>
                      ((vector<FoliageSystemDesc::Layer,std::__ndk1::allocator<FoliageSystemDesc::Layer>>
                        *)(this + 8),*(Layer **)(param_1 + 8),*(Layer **)(param_1 + 0x10));
    uVar3 = (ulong)tVar2;
  }
  return uVar3;
}


