// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: createTriangleDensityBufferFromIndexedTriangleSet
// Entry Point: 00a09f80
// Size: 1024 bytes
// Signature: undefined __thiscall createTriangleDensityBufferFromIndexedTriangleSet(RenderController * this, uint param_1, IndexedTriangleSet * param_2)


/* RenderController::createTriangleDensityBufferFromIndexedTriangleSet(unsigned int,
   IndexedTriangleSet const*) */

void __thiscall
RenderController::createTriangleDensityBufferFromIndexedTriangleSet
          (RenderController *this,uint param_1,IndexedTriangleSet *param_2)

{
  ushort *puVar1;
  uint *puVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  pair pVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  ulong uVar14;
  long lVar15;
  uint uVar16;
  ulong uVar17;
  undefined8 *puVar18;
  long *plVar19;
  uint uVar20;
  ulong uVar21;
  undefined8 *puVar22;
  ulong uVar23;
  undefined8 *puVar24;
  uint uVar25;
  undefined4 uVar26;
  uint local_d4 [3];
  uint *local_c8;
  undefined4 *local_c0;
  undefined2 local_b8;
  undefined8 local_b4;
  uint local_ac;
  undefined4 uStack_a8;
  undefined8 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  undefined local_90;
  undefined8 local_8c;
  undefined8 local_84;
  undefined8 uStack_7c;
  undefined4 local_74;
  char *local_70;
  long local_68;
  
  lVar4 = tpidr_el0;
  local_68 = *(long *)(lVar4 + 0x28);
  local_d4[0] = param_1;
  if ((param_2 == (IndexedTriangleSet *)0x0) ||
     (iVar5 = IndexedTriangleSet::getNumSubsets(), iVar5 == 0)) goto LAB_00a0a12c;
  uVar6 = IndexedTriangleSet::getNumIndices();
  lVar10 = TriangleSet::getBlendWeights();
  lVar11 = TriangleSet::getBlendIndices();
  uVar16 = 4;
  if ((*(uint *)(param_2 + 0xc) & 0x100) != 0) {
    uVar16 = 1;
  }
  uVar23 = (ulong)uVar16;
  uVar7 = TriangleSet::getAttributes();
  if ((uVar7 >> 8 & 1) == 0) {
    uVar7 = TriangleSet::getAttributes();
    if ((uVar7 >> 6 & 1) != 0) {
      iVar5 = uVar16 * 6;
      goto LAB_00a0a044;
    }
    iVar5 = 9;
  }
  else {
    iVar5 = uVar16 * 3;
LAB_00a0a044:
    iVar5 = iVar5 + 9;
  }
  local_b8 = 0;
  local_ac = iVar5 * (uVar6 / 3) + 1;
  local_9c = 0;
  local_a4 = 0x100000001;
  local_8c = 0x100000001;
  uStack_7c = 0x3f80000000000000;
  local_84 = 0;
  local_90 = 0;
  local_70 = "Triangle Density Texture Buffer";
  uStack_a8 = 1;
  local_74 = 0;
  local_98 = 0x1700000004;
  local_b4 = 0xffffffff00000000;
  puVar12 = (undefined4 *)operator_new__((ulong)local_ac << 2);
  *puVar12 = 0x3f800000;
  local_c0 = puVar12;
  if (2 < uVar6) {
    uVar7 = uVar6 / 3;
    uVar21 = 0;
    puVar18 = (undefined8 *)(puVar12 + 1);
    if (uVar6 / 3 < 2) {
      uVar7 = 1;
    }
    do {
      uVar14 = IndexedTriangleSet::is16Bit();
      if ((uVar14 & 1) == 0) {
        lVar15 = IndexedTriangleSet::getIndices32();
        puVar2 = (uint *)(lVar15 + uVar21 * 0xc);
        uVar6 = *puVar2;
        uVar20 = puVar2[1];
        uVar25 = puVar2[2];
      }
      else {
        lVar15 = IndexedTriangleSet::getIndices16();
        puVar1 = (ushort *)(lVar15 + uVar21 * 6);
        uVar6 = (uint)*puVar1;
        uVar20 = (uint)puVar1[1];
        uVar25 = (uint)puVar1[2];
      }
      lVar15 = TriangleSet::getPositions();
      puVar22 = (undefined8 *)((long)puVar18 + 0xc);
      puVar24 = (undefined8 *)(lVar15 + (ulong)(uVar6 * 3) * 4);
      uVar26 = *(undefined4 *)(puVar24 + 1);
      *puVar18 = *puVar24;
      *(undefined4 *)(puVar18 + 1) = uVar26;
      uVar9 = TriangleSet::getAttributes();
      if ((uVar9 >> 8 & 1) == 0) {
        uVar9 = TriangleSet::getAttributes();
        if ((uVar9 >> 6 & 1) != 0) {
          uVar6 = uVar6 * uVar16;
          uVar14 = uVar23;
          do {
            uVar3 = (ulong)uVar6;
            uVar17 = (ulong)uVar6;
            uVar6 = uVar6 + 1;
            uVar14 = uVar14 - 1;
            *(undefined4 *)puVar22 = *(undefined4 *)(lVar10 + uVar3 * 4);
            uVar26 = NEON_ucvtf((uint)*(byte *)(lVar11 + uVar17));
            *(undefined4 *)((long)puVar22 + 4) = uVar26;
            puVar22 = puVar22 + 1;
          } while (uVar14 != 0);
        }
      }
      else {
        uVar6 = uVar6 * uVar16;
        uVar14 = uVar23;
        puVar18 = puVar22;
        do {
          uVar3 = (ulong)uVar6;
          uVar6 = uVar6 + 1;
          uVar14 = uVar14 - 1;
          uVar26 = NEON_ucvtf((uint)*(byte *)(lVar11 + uVar3));
          puVar22 = (undefined8 *)((long)puVar18 + 4);
          *(undefined4 *)puVar18 = uVar26;
          puVar18 = puVar22;
        } while (uVar14 != 0);
      }
      lVar15 = TriangleSet::getPositions();
      puVar24 = (undefined8 *)((long)puVar22 + 0xc);
      puVar18 = (undefined8 *)(lVar15 + (ulong)(uVar20 * 3) * 4);
      uVar26 = *(undefined4 *)(puVar18 + 1);
      *puVar22 = *puVar18;
      *(undefined4 *)(puVar22 + 1) = uVar26;
      uVar6 = TriangleSet::getAttributes();
      if ((uVar6 >> 8 & 1) == 0) {
        uVar6 = TriangleSet::getAttributes();
        if ((uVar6 >> 6 & 1) != 0) {
          uVar20 = uVar20 * uVar16;
          uVar14 = uVar23;
          do {
            uVar3 = (ulong)uVar20;
            uVar17 = (ulong)uVar20;
            uVar14 = uVar14 - 1;
            uVar20 = uVar20 + 1;
            *(undefined4 *)puVar24 = *(undefined4 *)(lVar10 + uVar3 * 4);
            uVar26 = NEON_ucvtf((uint)*(byte *)(lVar11 + uVar17));
            *(undefined4 *)((long)puVar24 + 4) = uVar26;
            puVar24 = puVar24 + 1;
          } while (uVar14 != 0);
        }
      }
      else {
        uVar20 = uVar20 * uVar16;
        uVar14 = uVar23;
        puVar18 = puVar24;
        do {
          uVar3 = (ulong)uVar20;
          uVar14 = uVar14 - 1;
          uVar20 = uVar20 + 1;
          uVar26 = NEON_ucvtf((uint)*(byte *)(lVar11 + uVar3));
          puVar24 = (undefined8 *)((long)puVar18 + 4);
          *(undefined4 *)puVar18 = uVar26;
          puVar18 = puVar24;
        } while (uVar14 != 0);
      }
      lVar15 = TriangleSet::getPositions();
      puVar18 = (undefined8 *)((long)puVar24 + 0xc);
      puVar22 = (undefined8 *)(lVar15 + (ulong)(uVar25 * 3) * 4);
      uVar26 = *(undefined4 *)(puVar22 + 1);
      *puVar24 = *puVar22;
      *(undefined4 *)(puVar24 + 1) = uVar26;
      uVar6 = TriangleSet::getAttributes();
      if ((uVar6 >> 8 & 1) == 0) {
        uVar6 = TriangleSet::getAttributes();
        if ((uVar6 >> 6 & 1) != 0) {
          uVar25 = uVar25 * uVar16;
          uVar14 = uVar23;
          do {
            uVar3 = (ulong)uVar25;
            uVar17 = (ulong)uVar25;
            uVar14 = uVar14 - 1;
            uVar25 = uVar25 + 1;
            *(undefined4 *)puVar18 = *(undefined4 *)(lVar10 + uVar3 * 4);
            uVar26 = NEON_ucvtf((uint)*(byte *)(lVar11 + uVar17));
            *(undefined4 *)((long)puVar18 + 4) = uVar26;
            puVar18 = puVar18 + 1;
          } while (uVar14 != 0);
        }
      }
      else {
        uVar25 = uVar25 * uVar16;
        uVar14 = uVar23;
        puVar24 = puVar18;
        do {
          uVar3 = (ulong)uVar25;
          uVar14 = uVar14 - 1;
          uVar25 = uVar25 + 1;
          uVar26 = NEON_ucvtf((uint)*(byte *)(lVar11 + uVar3));
          puVar18 = (undefined8 *)((long)puVar24 + 4);
          *(undefined4 *)puVar24 = uVar26;
          puVar24 = puVar18;
        } while (uVar14 != 0);
      }
      uVar21 = uVar21 + 1;
    } while (uVar21 != uVar7);
  }
  plVar19 = *(long **)this;
  uVar13 = (**(code **)(*plVar19 + 0x138))(plVar19);
  uVar13 = (**(code **)(*plVar19 + 0x100))(plVar19,uVar13,&local_c0);
  local_c8 = local_d4;
  pVar8 = std::__ndk1::
          __hash_table<std::__ndk1::__hash_value_type<unsigned_int,ITextureObject*>,std::__ndk1::__unordered_map_hasher<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,ITextureObject*>,std::__ndk1::hash<unsigned_int>,true>,std::__ndk1::__unordered_map_equal<unsigned_int,std::__ndk1::__hash_value_type<unsigned_int,ITextureObject*>,std::__ndk1::equal_to<unsigned_int>,true>,std::__ndk1::allocator<std::__ndk1::__hash_value_type<unsigned_int,ITextureObject*>>>
          ::
          __emplace_unique_key_args<unsigned_int,std::__ndk1::piecewise_construct_t_const&,std::__ndk1::tuple<unsigned_int_const&>,std::__ndk1::tuple<>>
                    ((uint *)(this + 0x2a0),(piecewise_construct_t *)local_d4,(tuple *)&DAT_0051d4e0
                     ,(tuple *)&local_c8);
  *(undefined8 *)((ulong)pVar8 + 0x18) = uVar13;
  operator_delete__(puVar12);
LAB_00a0a12c:
  if (*(long *)(lVar4 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


