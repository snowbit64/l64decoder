// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: serializeIndexedTriangleSetStart
// Entry Point: 0092d9c0
// Size: 1144 bytes
// Signature: undefined __cdecl serializeIndexedTriangleSetStart(IndexedTriangleSet * param_1, char * param_2, uint param_3, Vector3 * param_4, float param_5, bool param_6, basic_ostream * param_7)


/* I3DSaveUtil::serializeIndexedTriangleSetStart(IndexedTriangleSet*, char const*, unsigned int,
   Vector3 const&, float, bool, std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&)
    */

void I3DSaveUtil::serializeIndexedTriangleSetStart
               (IndexedTriangleSet *param_1,char *param_2,uint param_3,Vector3 *param_4,
               float param_5,bool param_6,basic_ostream *param_7)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  basic_ostream *pbVar5;
  size_t sVar6;
  ulong uVar7;
  ulong uVar8;
  ushort *puVar9;
  uint *puVar10;
  byte local_90;
  undefined8 local_8f;
  undefined local_87;
  void *local_80;
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  uVar3 = *(uint *)(param_1 + 0x8c);
  uVar2 = TriangleSet::getAttributes();
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_7,"    <IndexedTriangleSet name=\"",0x1e);
  sVar6 = strlen(param_2);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,param_2,sVar6);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"\" shapeId=\"",0xb);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,param_3);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"\" ",2);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar5,"meshUsage=\"",0xb);
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,uVar3);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,"\"",1);
  if (param_5 != 0.0) {
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_7," bvCenter=\"",0xb);
    pbVar5 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                        *(float *)param_4);
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar5," ",1);
    pbVar5 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                        *(float *)(param_4 + 4));
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar5," ",1);
    pbVar5 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,
                        *(float *)(param_4 + 8));
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar5,"\" bvRadius=\"",0xc);
    pbVar5 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,param_5);
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,"\"",1);
  }
  if (param_1[0x88] != (IndexedTriangleSet)0x0) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_7," isOptimized=\"true\"",0x13);
  }
  if (param_6) {
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
              (param_7," isAttachment=\"true\"",0x14);
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_7,">\n",2);
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_7,"      <Vertices count=\"",0x17);
  uVar3 = TriangleSet::getNumVertices();
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,uVar3);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,"\"",1);
  serializeVertexAttributes(uVar2,param_7);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_7,">\n",2);
  local_87 = 0;
  local_90 = 0x10;
  local_8f = 0x2020202020202020;
                    /* try { // try from 0092dbd0 to 0092dc07 has its CatchHandler @ 0092de38 */
  uVar3 = TriangleSet::getNumVertices();
  serializeVertexData(uVar2,param_1,0,uVar3,(basic_string *)&local_90,param_7);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_7,"      </Vertices>\n",0x12);
                    /* try { // try from 0092dc08 to 0092dc9f has its CatchHandler @ 0092de3c */
  uVar7 = IndexedTriangleSet::getNumIndices();
  uVar8 = IndexedTriangleSet::is16Bit();
  if ((uVar8 & 1) == 0) {
    puVar10 = (uint *)IndexedTriangleSet::getIndices32();
    serializeTriangles<unsigned_int>((uint)((uVar7 & 0xffffffff) / 3),puVar10,param_7);
  }
  else {
    puVar9 = (ushort *)IndexedTriangleSet::getIndices16();
    serializeTriangles<unsigned_short>((uint)((uVar7 & 0xffffffff) / 3),puVar9,param_7);
  }
  pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_7,"      <Subsets count=\"",0x16);
  uVar3 = IndexedTriangleSet::getNumSubsets();
  pbVar5 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,uVar3);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar5,"\">\n",3);
                    /* try { // try from 0092dccc to 0092dcd3 has its CatchHandler @ 0092de40 */
  for (uVar3 = 0; uVar4 = IndexedTriangleSet::getNumSubsets(), uVar3 < uVar4; uVar3 = uVar3 + 1) {
                    /* try { // try from 0092dcdc to 0092ddcf has its CatchHandler @ 0092de44 */
    puVar10 = (uint *)IndexedTriangleSet::getSubset(param_1,uVar3);
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (param_7,"        <Subset firstVertex=\"",0x1d);
    pbVar5 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,*puVar10);
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar5,"\" numVertices=\"",0xf);
    pbVar5 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,puVar10[1]);
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar5,"\" firstIndex=\"",0xe);
    pbVar5 = (basic_ostream *)
             std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                       ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,puVar10[2]);
    pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                       (pbVar5,"\" numIndices=\"",0xe);
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,puVar10[3]);
    if ((uVar2 >> 1 & 1) != 0) {
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_7,"\" uvDensity0=\"",0xe);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,(float)puVar10[4]);
    }
    if ((uVar2 >> 2 & 1) != 0) {
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_7,"\" uvDensity1=\"",0xe);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,(float)puVar10[5]);
    }
    if ((uVar2 >> 3 & 1) != 0) {
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_7,"\" uvDensity2=\"",0xe);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,(float)puVar10[6]);
    }
    if ((uVar2 >> 4 & 1) != 0) {
      pbVar5 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_7,"\" uvDensity3=\"",0xe);
      std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar5,(float)puVar10[7]);
    }
    std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_7,"\"/>\n",4);
  }
                    /* try { // try from 0092ddd8 to 0092ddeb has its CatchHandler @ 0092de3c */
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_7,"      </Subsets>\n",0x11);
  if ((local_90 & 1) != 0) {
    operator_delete(local_80);
  }
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


