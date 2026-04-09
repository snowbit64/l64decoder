// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exportCommonTerrainDetailAttributes
// Entry Point: 0090ac30
// Size: 660 bytes
// Signature: undefined __cdecl exportCommonTerrainDetailAttributes(TerrainDetailTransformGroup * param_1, TerrainDetailTransformGroupDesc * param_2, BaseTerrain * param_3, set * param_4, map * param_5, map * param_6, map * param_7, bool param_8, FileOutputStream * param_9)


/* I3DSave::exportCommonTerrainDetailAttributes(TerrainDetailTransformGroup*,
   TerrainDetailTransformGroupDesc*, BaseTerrain*, std::__ndk1::set<TransformGroup*,
   std::__ndk1::less<TransformGroup*>, std::__ndk1::allocator<TransformGroup*> >&,
   std::__ndk1::map<TransformGroup*, I3DSave::I3DTransformPoseObject,
   std::__ndk1::less<TransformGroup*>, std::__ndk1::allocator<std::__ndk1::pair<TransformGroup*
   const, I3DSave::I3DTransformPoseObject> > >&, std::__ndk1::map<Geometry*, unsigned int,
   std::__ndk1::less<Geometry*>, std::__ndk1::allocator<std::__ndk1::pair<Geometry* const, unsigned
   int> > >&, std::__ndk1::map<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >, SceneSave::SerializeFile,
   std::__ndk1::less<std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> > >,
   std::__ndk1::allocator<std::__ndk1::pair<std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const, SceneSave::SerializeFile> >
   >&, bool, FileOutputStream&) */

void I3DSave::exportCommonTerrainDetailAttributes
               (TerrainDetailTransformGroup *param_1,TerrainDetailTransformGroupDesc *param_2,
               BaseTerrain *param_3,set *param_4,map *param_5,map *param_6,map *param_7,bool param_8
               ,FileOutputStream *param_9)

{
  long lVar1;
  __tree_iterator _Var2;
  char *__s;
  size_t __n;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  void *__dest;
  float fVar7;
  float fVar8;
  FileOutputStream *local_88;
  undefined8 local_80;
  size_t local_78;
  void *local_70;
  long local_68;
  
  lVar1 = tpidr_el0;
  local_68 = *(long *)(lVar1 + 0x28);
  local_88 = param_9;
  I3DWriter::writeUtf8StringAttribute((I3DWriter *)&local_88,"name",*(char **)(param_1 + 8),true);
  if (!param_8) {
    if (*(uint *)(param_2 + 0x20) != 0xffffffff) {
      I3DWriter::writeUint32Attribute
                ((I3DWriter *)&local_88,"densityMapTypeIndex",*(uint *)(param_2 + 0x20));
    }
    if (*(uint *)(param_2 + 0x18) != 0) {
      I3DWriter::writeUint32Attribute
                ((I3DWriter *)&local_88,"densityMapChannelOffset",*(uint *)(param_2 + 0x18));
    }
    I3DWriter::writeUint32Attribute
              ((I3DWriter *)&local_88,"numDensityMapChannels",*(uint *)(param_2 + 0x1c));
    goto LAB_0090ae30;
  }
  __s = (char *)DensityMap::getFilename();
  __n = strlen(__s);
  if (0xffffffffffffffef < __n) {
                    /* WARNING: Subroutine does not return */
    std::__ndk1::__basic_string_common<true>::__throw_length_error();
  }
  if (__n < 0x17) {
    __dest = (void *)((ulong)&local_80 | 1);
    local_80 = CONCAT71(local_80._1_7_,(char)((int)__n << 1));
    if (__n != 0) goto LAB_0090ad38;
  }
  else {
    uVar5 = __n + 0x10 & 0xfffffffffffffff0;
    __dest = operator_new(uVar5);
    local_80 = uVar5 | 1;
    local_78 = __n;
    local_70 = __dest;
LAB_0090ad38:
    memcpy(__dest,__s,__n);
  }
  *(undefined *)((long)__dest + __n) = 0;
                    /* try { // try from 0090ad4c to 0090ad7f has its CatchHandler @ 0090aec4 */
  _Var2 = std::__ndk1::
          __tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
          ::
          find<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>
                    ((__tree<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::__map_value_compare<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>,std::__ndk1::less<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>,SceneSave::SerializeFile>>>
                      *)param_7,(basic_string *)&local_80);
  if (param_7 + 8 == (map *)(ulong)_Var2) {
    uVar3 = 0;
  }
  else {
    uVar3 = *(uint *)((map *)(ulong)_Var2 + 0x38);
  }
  I3DWriter::writeUint32Attribute((I3DWriter *)&local_88,"densityMapId",uVar3);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(uint *)(param_2 + 0x20) != 0xffffffff) {
    I3DWriter::writeUint32Attribute
              ((I3DWriter *)&local_88,"densityMapTypeIndex",*(uint *)(param_2 + 0x20));
  }
  if (*(uint *)(param_2 + 0x18) != 0) {
    I3DWriter::writeUint32Attribute
              ((I3DWriter *)&local_88,"densityMapChannelOffset",*(uint *)(param_2 + 0x18));
  }
  I3DWriter::writeUint32Attribute
            ((I3DWriter *)&local_88,"numDensityMapChannels",*(uint *)(param_2 + 0x1c));
  lVar4 = *(long *)(param_2 + 0x10);
  if (1 < *(uint *)(lVar4 + 0xa8)) {
    uVar5 = 0;
    do {
      lVar6 = uVar5 * 4;
      uVar5 = uVar5 + 1;
      *(undefined4 *)((long)&local_80 + lVar6) = *(undefined4 *)(lVar4 + 0xac + lVar6);
      uVar3 = *(int *)(lVar4 + 0xa8) - 1;
    } while (uVar5 < uVar3);
    I3DWriter::writeUint32ListAttribute
              ((I3DWriter *)&local_88,"compressionChannels",";",(uint *)&local_80,uVar3);
  }
LAB_0090ae30:
  fVar8 = *(float *)param_2;
  fVar7 = (float)BaseTerrain::getUnitsPerPixel();
  I3DWriter::writeUint32Attribute((I3DWriter *)&local_88,"cellSize",(int)(fVar8 / fVar7 + 0.5));
  I3DWriter::writeUint32Attribute((I3DWriter *)&local_88,"objectMask",*(uint *)(param_2 + 4));
  I3DWriter::writeUint32Attribute((I3DWriter *)&local_88,"decalLayer",*(uint *)(param_2 + 8));
  if (*(long *)(lVar1 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


