// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveToDesc
// Entry Point: 00a748cc
// Size: 496 bytes
// Signature: undefined __thiscall saveToDesc(TerrainLayerTransformGroup * this, TerrainLayerTransformGroupDesc * param_1)


/* TerrainLayerTransformGroup::saveToDesc(TerrainLayerTransformGroupDesc&) */

void __thiscall
TerrainLayerTransformGroup::saveToDesc
          (TerrainLayerTransformGroup *this,TerrainLayerTransformGroupDesc *param_1)

{
  undefined8 uVar1;
  TerrainLayerTransformGroup *pTVar2;
  int iVar3;
  TerrainLayerTransformGroup TVar4;
  basic_string *pbVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  
  TerrainDetailTransformGroup::saveToDesc
            ((TerrainDetailTransformGroup *)this,(TerrainDetailTransformGroupDesc *)param_1);
  uVar1 = 0;
  if (*(int *)(*(long *)(this + 0x630) + 0x8c) != 0) {
    uVar1 = *(undefined8 *)(this + 0x638);
  }
  *(undefined8 *)(param_1 + 0x28) = uVar1;
  *(undefined4 *)(param_1 + 0x30) = *(undefined4 *)(this + 0x170);
  *(float *)(param_1 + 0x34) = *(float *)(this + 0x644) - *(float *)(this + 0x640);
  pTVar2 = this + 0x661;
  if (((byte)this[0x660] & 1) != 0) {
    pTVar2 = *(TerrainLayerTransformGroup **)(this + 0x670);
  }
  strncpy((char *)(param_1 + 0x38),(char *)pTVar2,0x100);
  param_1[0x137] = (TerrainLayerTransformGroupDesc)0x0;
  pTVar2 = this + 0x679;
  if (((byte)this[0x678] & 1) != 0) {
    pTVar2 = *(TerrainLayerTransformGroup **)(this + 0x688);
  }
  strncpy((char *)(param_1 + 0x138),(char *)pTVar2,0x100);
  param_1[0x237] = (TerrainLayerTransformGroupDesc)0x0;
  TVar4 = this[0x718];
  *(TerrainLayerTransformGroup *)(param_1 + 0x280) = TVar4;
  if (TVar4 == (TerrainLayerTransformGroup)0x0) {
    *(undefined8 *)(param_1 + 0x278) = 0;
    *(undefined8 *)(param_1 + 0x260) = 0;
    *(undefined8 *)(param_1 + 600) = 0;
    *(undefined8 *)(param_1 + 0x270) = 0;
    *(undefined8 *)(param_1 + 0x268) = 0;
    *(undefined8 *)(param_1 + 0x240) = 0;
    *(undefined8 *)(param_1 + 0x238) = 0;
    *(undefined8 *)(param_1 + 0x250) = 0;
    *(undefined8 *)(param_1 + 0x248) = 0;
    iVar3 = *(int *)(this + 0x71c);
  }
  else {
    *(undefined4 *)(param_1 + 0x238) = *(undefined4 *)(this + 0x6d0);
    *(undefined4 *)(param_1 + 0x240) = *(undefined4 *)(this + 0x6d8);
    *(undefined4 *)(param_1 + 0x244) = *(undefined4 *)(this + 0x6dc);
    *(undefined4 *)(param_1 + 0x248) = *(undefined4 *)(this + 0x6e0);
    *(undefined4 *)(param_1 + 0x24c) = *(undefined4 *)(this + 0x6e4);
    *(undefined4 *)(param_1 + 0x250) = *(undefined4 *)(this + 0x6e8);
    *(undefined4 *)(param_1 + 0x254) = *(undefined4 *)(this + 0x6ec);
    *(undefined4 *)(param_1 + 600) = *(undefined4 *)(this + 0x6f0);
    *(undefined4 *)(param_1 + 0x25c) = *(undefined4 *)(this + 0x6f4);
    *(undefined4 *)(param_1 + 0x23c) = *(undefined4 *)(this + 0x6d4);
    *(undefined4 *)(param_1 + 0x260) = *(undefined4 *)(this + 0x6f8);
    *(undefined4 *)(param_1 + 0x264) = *(undefined4 *)(this + 0x6fc);
    *(undefined4 *)(param_1 + 0x268) = *(undefined4 *)(this + 0x700);
    *(undefined4 *)(param_1 + 0x26c) = *(undefined4 *)(this + 0x704);
    *(undefined4 *)(param_1 + 0x270) = *(undefined4 *)(this + 0x708);
    *(undefined4 *)(param_1 + 0x274) = *(undefined4 *)(this + 0x70c);
    *(undefined4 *)(param_1 + 0x278) = *(undefined4 *)(this + 0x710);
    *(undefined4 *)(param_1 + 0x27c) = *(undefined4 *)(this + 0x714);
    iVar3 = *(int *)(this + 0x71c);
  }
  if (iVar3 != 0) {
    lVar6 = 0;
    uVar7 = 0;
    do {
      lVar8 = *(long *)(this + 0x720);
      pbVar5 = *(basic_string **)(param_1 + 0x298);
      if (pbVar5 == *(basic_string **)(param_1 + 0x2a0)) {
        std::__ndk1::
        vector<TerrainLayerTransformGroupDesc::DistanceTextureDesc,std::__ndk1::allocator<TerrainLayerTransformGroupDesc::DistanceTextureDesc>>
        ::__push_back_slow_path<TerrainLayerTransformGroupDesc::DistanceTextureDesc_const&>
                  ((vector<TerrainLayerTransformGroupDesc::DistanceTextureDesc,std::__ndk1::allocator<TerrainLayerTransformGroupDesc::DistanceTextureDesc>>
                    *)(param_1 + 0x290),(DistanceTextureDesc *)(lVar8 + lVar6));
      }
      else {
                    /* try { // try from 00a74a70 to 00a74a77 has its CatchHandler @ 00a74abc */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(pbVar5);
                    /* try { // try from 00a74a84 to 00a74a87 has its CatchHandler @ 00a74ac4 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(pbVar5 + 6);
        pbVar5[0xc] = *(basic_string *)(lVar8 + lVar6 + 0x30);
        *(basic_string **)(param_1 + 0x298) = pbVar5 + 0xe;
      }
      uVar7 = uVar7 + 1;
      lVar6 = lVar6 + 0x38;
    } while (uVar7 < *(uint *)(this + 0x71c));
  }
  TerrainFillDataPlane::saveToDesc(*(TerrainFillDataPlane **)(this + 0x630),param_1);
  return;
}


