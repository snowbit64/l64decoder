// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: construct<FoliageSystemDesc::MultiLayer,FoliageSystemDesc::MultiLayer>
// Entry Point: 00a68b78
// Size: 124 bytes
// Signature: void __thiscall construct<FoliageSystemDesc::MultiLayer,FoliageSystemDesc::MultiLayer>(allocator<FoliageSystemDesc::MultiLayer> * this, MultiLayer * param_1, MultiLayer * param_2)


/* void 
   std::__ndk1::allocator<FoliageSystemDesc::MultiLayer>::construct<FoliageSystemDesc::MultiLayer,
   FoliageSystemDesc::MultiLayer>(FoliageSystemDesc::MultiLayer*, FoliageSystemDesc::MultiLayer&&)
    */

void __thiscall
std::__ndk1::allocator<FoliageSystemDesc::MultiLayer>::
construct<FoliageSystemDesc::MultiLayer,FoliageSystemDesc::MultiLayer>
          (allocator<FoliageSystemDesc::MultiLayer> *this,MultiLayer *param_1,MultiLayer *param_2)

{
  undefined4 uVar1;
  ResourceManager *this_00;
  long lVar2;
  
  *(undefined8 *)(param_1 + 8) = 0;
  *(undefined8 *)param_1 = 0;
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined8 *)(param_1 + 0x10) = 0;
  lVar2 = *(long *)param_2;
  if (lVar2 != 0) {
    FUN_00f276d0(1,lVar2 + 8);
  }
                    /* try { // try from 00a68bb4 to 00a68bdf has its CatchHandler @ 00a68bf4 */
  this_00 = (ResourceManager *)ResourceManager::getInstance();
  ResourceManager::release(this_00,*(Resource **)param_1);
  uVar1 = *(undefined4 *)(param_2 + 0x20);
  *(long *)param_1 = lVar2;
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  if (param_1 != param_2) {
    vector<FoliageSystemDesc::Layer,std::__ndk1::allocator<FoliageSystemDesc::Layer>>::
    assign<FoliageSystemDesc::Layer*>
              ((vector<FoliageSystemDesc::Layer,std::__ndk1::allocator<FoliageSystemDesc::Layer>> *)
               (param_1 + 8),*(Layer **)(param_2 + 8),*(Layer **)(param_2 + 0x10));
  }
  return;
}


