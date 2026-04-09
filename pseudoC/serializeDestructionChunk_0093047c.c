// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: serializeDestructionChunk
// Entry Point: 0093047c
// Size: 876 bytes
// Signature: undefined __cdecl serializeDestructionChunk(DestructionChunk * param_1, IndexedTriangleSet * param_2, basic_ostream * param_3)


/* I3DSaveUtil::serializeDestructionChunk(DestructionChunk*, IndexedTriangleSet*,
   std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&) */

void I3DSaveUtil::serializeDestructionChunk
               (DestructionChunk *param_1,IndexedTriangleSet *param_2,basic_ostream *param_3)

{
  ushort uVar1;
  long lVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  basic_ostream *pbVar7;
  ushort *puVar8;
  ulong uVar9;
  float *pfVar10;
  ulong uVar11;
  byte local_80;
  undefined8 local_7f;
  undefined2 local_77;
  undefined local_75;
  void *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  local_80 = 0x14;
  local_7f = 0x2020202020202020;
  local_77 = 0x2020;
  local_75 = 0;
                    /* try { // try from 009304d0 to 00930563 has its CatchHandler @ 009307e8 */
  pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_3,"        <c nc=\"",0xf);
  uVar3 = DestructionChunk::getNumChildren();
  pbVar7 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,uVar3);
  pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar7,"\" fci=\"",7);
  iVar4 = DestructionChunk::getFirstChildIndex();
  pbVar7 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,iVar4);
  pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (pbVar7,"\" ni=\"",6);
  uVar3 = DestructionChunk::getNumIndices();
  pbVar7 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,uVar3);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar7,"\" i=\"",5);
  iVar4 = DestructionChunk::getNumIndices();
  if (iVar4 != 0) {
    puVar8 = (ushort *)DestructionChunk::getIndices();
    uVar1 = *puVar8;
    iVar4 = DestructionChunk::getFirstVertex();
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_3,(uint)uVar1 - iVar4);
    uVar3 = DestructionChunk::getNumIndices();
    if (1 < uVar3) {
      uVar11 = 1;
      do {
        pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_3," ",1);
        uVar1 = puVar8[uVar11];
        iVar4 = DestructionChunk::getFirstVertex();
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,(uint)uVar1 - iVar4)
        ;
        uVar11 = uVar11 + 1;
        uVar9 = DestructionChunk::getNumIndices();
      } while (uVar11 < (uVar9 & 0xffffffff));
    }
  }
                    /* try { // try from 009305e8 to 0093062b has its CatchHandler @ 009307e8 */
  pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_3,"\" nhv=\"",7);
  uVar3 = DestructionChunk::getNumHullVertices();
  pbVar7 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,uVar3);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar7,"\" hv=\"",6);
  iVar4 = DestructionChunk::getNumHullVertices();
  if (iVar4 != 0) {
    pfVar10 = (float *)DestructionChunk::getHullVertices();
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_3,*pfVar10);
    iVar4 = DestructionChunk::getNumHullVertices();
    if (1 < (uint)(iVar4 * 3)) {
      uVar11 = 1;
      do {
        pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_3," ",1);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,pfVar10[uVar11]);
        uVar11 = uVar11 + 1;
        iVar4 = DestructionChunk::getNumHullVertices();
      } while (uVar11 < (uint)(iVar4 * 3));
    }
  }
                    /* try { // try from 00930698 to 009306db has its CatchHandler @ 009307e8 */
  pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_3,"\" nhei=\"",8);
  uVar3 = DestructionChunk::getNumHullEgdeIndices();
  pbVar7 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,uVar3);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar7,"\" hei=\"",7);
  iVar4 = DestructionChunk::getNumHullEgdeIndices();
  if (iVar4 != 0) {
    puVar8 = (ushort *)DestructionChunk::getHullEgdeIndices();
    std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
              ((basic_ostream<char,std::__ndk1::char_traits<char>> *)param_3,*puVar8);
    uVar3 = DestructionChunk::getNumHullEgdeIndices();
    if (1 < uVar3) {
      uVar11 = 1;
      do {
        pbVar7 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_3," ",1);
        std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                  ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar7,puVar8[uVar11]);
        uVar11 = uVar11 + 1;
        uVar9 = DestructionChunk::getNumHullEgdeIndices();
      } while (uVar11 < (uVar9 & 0xffffffff));
    }
  }
                    /* try { // try from 00930740 to 009307a3 has its CatchHandler @ 009307e8 */
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_3,"\">\n",3);
  uVar3 = TriangleSet::getAttributes();
  uVar5 = DestructionChunk::getFirstVertex();
  uVar6 = DestructionChunk::getNumVertices();
  serializeVertexData(uVar3,param_2,uVar5,uVar6,(basic_string *)&local_80,param_3);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_3,"        </c>\n",0xd);
  if ((local_80 & 1) != 0) {
    operator_delete(local_70);
  }
  if (*(long *)(lVar2 + 0x28) == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


