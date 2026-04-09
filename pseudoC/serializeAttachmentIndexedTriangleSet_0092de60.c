// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: serializeAttachmentIndexedTriangleSet
// Entry Point: 0092de60
// Size: 1064 bytes
// Signature: undefined __cdecl serializeAttachmentIndexedTriangleSet(IndexedTriangleSet * param_1, char * param_2, uint param_3, vector * param_4, vector * param_5, basic_ostream * param_6)


/* I3DSaveUtil::serializeAttachmentIndexedTriangleSet(IndexedTriangleSet*, char const*, unsigned
   int, std::__ndk1::vector<MeshSplitAttachmentGeometry::ShapeAttachment,
   std::__ndk1::allocator<MeshSplitAttachmentGeometry::ShapeAttachment> > const&,
   std::__ndk1::vector<MeshSplitAttachmentSharedData::AttachmentGeometryData,
   std::__ndk1::allocator<MeshSplitAttachmentSharedData::AttachmentGeometryData> > const&,
   std::__ndk1::basic_ostream<char, std::__ndk1::char_traits<char> >&) */

void I3DSaveUtil::serializeAttachmentIndexedTriangleSet
               (IndexedTriangleSet *param_1,char *param_2,uint param_3,vector *param_4,
               vector *param_5,basic_ostream *param_6)

{
  long lVar1;
  long lVar2;
  ushort uVar3;
  long lVar4;
  uint uVar5;
  basic_ostream *pbVar6;
  long lVar7;
  long lVar8;
  undefined4 *this;
  undefined4 uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_98;
  float local_94;
  float local_90;
  long local_88;
  
  lVar4 = tpidr_el0;
  local_88 = *(long *)(lVar4 + 0x28);
  serializeIndexedTriangleSetStart(param_1,param_2,param_3,(Vector3 *)&local_98,0.0,true,param_6);
  lVar1 = *(long *)param_4;
  lVar2 = *(long *)(param_4 + 8);
  pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                     (param_6,"      <Attachments count=\"",0x1a);
  uVar5 = (uint)((ulong)(lVar2 - lVar1) >> 2);
  pbVar6 = (basic_ostream *)
           std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                     ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,uVar5);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar6,"\">\n",3);
  if (uVar5 != 0) {
    lVar8 = 0;
    do {
      uVar3 = *(ushort *)(*(long *)param_4 + lVar8 + 2);
      lVar7 = *(long *)param_5;
      pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (param_6,"        <Attachment faceIndex=\"",0x1f);
      pbVar6 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,
                          *(ushort *)(*(long *)param_4 + lVar8));
      pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar6,"\" bvCenter=\"",0xc);
      this = (undefined4 *)(lVar7 + (ulong)uVar3 * 0x50);
      pbVar6 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,
                          (float)this[0x10]);
      pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar6," ",1);
      pbVar6 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,
                          (float)this[0x11]);
      pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar6," ",1);
      pbVar6 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,
                          (float)this[0x12]);
      pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                         (pbVar6,"\" bvRadius=\"",0xc);
      pbVar6 = (basic_ostream *)
               std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                         ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,
                          (float)this[0x13]);
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar6,"\"",1);
      fVar12 = (float)this[0xc];
      fVar11 = (float)this[0xd];
      fVar10 = (float)this[0xe];
      uVar9 = NEON_fmadd(*this,*this,(float)this[1] * (float)this[1]);
      local_a8 = (float)NEON_fmadd(this[2],this[2],uVar9);
      local_a8 = SQRT(local_a8);
      uVar9 = NEON_fmadd(this[4],this[4],(float)this[5] * (float)this[5]);
      local_a4 = (float)NEON_fmadd(this[6],this[6],uVar9);
      local_a4 = SQRT(local_a4);
      uVar9 = NEON_fmadd(this[8],this[8],(float)this[9] * (float)this[9]);
      local_a0 = (float)NEON_fmadd(this[10],this[10],uVar9);
      local_a0 = SQRT(local_a0);
      if ((local_a8 < 1.00001) && (0.99999 < local_a8)) {
        local_a8 = 1.0;
      }
      if ((local_a4 < 1.00001) && (0.99999 < local_a4)) {
        local_a4 = 1.0;
      }
      if ((local_a0 < 1.00001) && (0.99999 < local_a0)) {
        local_a0 = 1.0;
      }
      Matrix4x4::getEulerAngles((Matrix4x4 *)this,(Vector3 *)&local_98,(Vector3 *)&local_a8);
      if (((fVar12 != 0.0) || (fVar11 != 0.0)) || (fVar10 != 0.0)) {
        pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_6," translation=\"",0xe);
        pbVar6 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,fVar12);
        pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar6," ",1);
        pbVar6 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,fVar11);
        pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar6," ",1);
        pbVar6 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,fVar10);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar6,"\"",1);
      }
      if (((local_98 != 0.0) || (local_94 != 0.0)) || (local_90 != 0.0)) {
        pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_6," rotation=\"",0xb);
        fVar10 = (float)MathUtil::radianToDegree(local_98);
        pbVar6 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,fVar10);
        pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar6," ",1);
        fVar10 = (float)MathUtil::radianToDegree(local_94);
        pbVar6 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,fVar10);
        pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar6," ",1);
        fVar10 = (float)MathUtil::radianToDegree(local_90);
        pbVar6 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,fVar10);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar6,"\"",1);
      }
      if (((local_a8 != 1.0) || (local_a4 != 1.0)) || (local_a0 != 1.0)) {
        pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (param_6," scale=\"",8);
        pbVar6 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,local_a8);
        pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar6," ",1);
        pbVar6 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,local_a4);
        pbVar6 = std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
                           (pbVar6," ",1);
        pbVar6 = (basic_ostream *)
                 std::__ndk1::basic_ostream<char,std::__ndk1::char_traits<char>>::operator<<
                           ((basic_ostream<char,std::__ndk1::char_traits<char>> *)pbVar6,local_a0);
        std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(pbVar6,"\"",1);
      }
      std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>(param_6,"/>\n",3);
      lVar8 = lVar8 + 4;
    } while (((ulong)(lVar2 - lVar1) >> 2 & 0xffffffff) * 4 - lVar8 != 0);
  }
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_6,"      </Attachments>\n",0x15);
  std::__ndk1::__put_character_sequence<char,std::__ndk1::char_traits<char>>
            (param_6,"    </IndexedTriangleSet>\n",0x1a);
  if (*(long *)(lVar4 + 0x28) != local_88) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


