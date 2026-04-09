// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: vector
// Entry Point: 0093dfa0
// Size: 228 bytes
// Signature: undefined __thiscall vector(vector<TerrainLayerTransformGroupDesc::DistanceTextureDesc,std::__ndk1::allocator<TerrainLayerTransformGroupDesc::DistanceTextureDesc>> * this, vector * param_1)


/* std::__ndk1::vector<TerrainLayerTransformGroupDesc::DistanceTextureDesc,
   std::__ndk1::allocator<TerrainLayerTransformGroupDesc::DistanceTextureDesc>
   >::vector(std::__ndk1::vector<TerrainLayerTransformGroupDesc::DistanceTextureDesc,
   std::__ndk1::allocator<TerrainLayerTransformGroupDesc::DistanceTextureDesc> > const&) */

void __thiscall
std::__ndk1::
vector<TerrainLayerTransformGroupDesc::DistanceTextureDesc,std::__ndk1::allocator<TerrainLayerTransformGroupDesc::DistanceTextureDesc>>
::vector(vector<TerrainLayerTransformGroupDesc::DistanceTextureDesc,std::__ndk1::allocator<TerrainLayerTransformGroupDesc::DistanceTextureDesc>>
         *this,vector *param_1)

{
  long lVar1;
  ulong uVar2;
  basic_string *pbVar3;
  basic_string *pbVar4;
  long lVar5;
  
  *(undefined8 *)this = 0;
  *(undefined8 *)(this + 8) = 0;
  *(undefined8 *)(this + 0x10) = 0;
  uVar2 = *(long *)(param_1 + 8) - *(long *)param_1;
  if (uVar2 != 0) {
    if (0x492492492492492 < (ulong)(((long)uVar2 >> 3) * 0x6db6db6db6db6db7)) {
                    /* try { // try from 0093e07c to 0093e083 has its CatchHandler @ 0093e084 */
                    /* WARNING: Subroutine does not return */
      std::__ndk1::__vector_base_common<true>::__throw_length_error();
    }
                    /* try { // try from 0093e000 to 0093e003 has its CatchHandler @ 0093e084 */
    pbVar3 = (basic_string *)operator_new(uVar2);
    *(basic_string **)this = pbVar3;
    *(basic_string **)(this + 8) = pbVar3;
    *(basic_string **)(this + 0x10) = pbVar3 + ((long)uVar2 >> 3) * 2;
    lVar5 = *(long *)param_1;
    lVar1 = *(long *)(param_1 + 8);
    if (lVar5 != lVar1) {
      do {
        pbVar4 = pbVar3;
                    /* try { // try from 0093e028 to 0093e033 has its CatchHandler @ 0093e08c */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(pbVar4);
                    /* try { // try from 0093e03c to 0093e047 has its CatchHandler @ 0093e094 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::basic_string(pbVar4 + 6);
        pbVar3 = (basic_string *)(lVar5 + 0x30);
        lVar5 = lVar5 + 0x38;
        pbVar4[0xc] = *pbVar3;
        pbVar3 = pbVar4 + 0xe;
      } while (lVar5 != lVar1);
      pbVar3 = pbVar4 + 0xe;
    }
    *(basic_string **)(this + 8) = pbVar3;
  }
  return;
}


