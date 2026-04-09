// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: updateKey
// Entry Point: 00b7e034
// Size: 656 bytes
// Signature: undefined __thiscall updateKey(PriorityQueue<GeometryUtil::_optimiseTriangles<unsigned_int>(unsigned_int,unsigned_int,unsigned_int,unsigned_int_const*,unsigned_int*)::TriangleScore,unsigned_int,std::__ndk1::less<GeometryUtil::_optimiseTriangles<unsigned_int>(unsigned_int,unsigned_int,unsigned_int,unsigned_int_const*,unsigned_int*)::TriangleScore>,std::__ndk1::vector<std::__ndk1::pair<GeometryUtil::_optimiseTriangles<unsigned_int>(unsigned_int,unsigned_int,unsigned_int,unsigned_int_const*,unsigned_int*)::TriangleScore,unsigned_int*>,std::__ndk1::allocator<std::__ndk1::pair<GeometryUtil::_optimiseTriangles<unsigned_int>(unsigned_int,unsigned_int,unsigned_int,unsigned_int_const*,unsigned_int*)::TriangleScore,unsigned_int*>>>> * this, uint param_1, TriangleScore * param_2)


/* PriorityQueue<GeometryUtil::_optimiseTriangles<unsigned int>(unsigned int, unsigned int, unsigned
   int, unsigned int const*, unsigned int*)::TriangleScore, unsigned int,
   std::__ndk1::less<GeometryUtil::_optimiseTriangles<unsigned int>(unsigned int, unsigned int,
   unsigned int, unsigned int const*, unsigned int*)::TriangleScore>,
   std::__ndk1::vector<std::__ndk1::pair<GeometryUtil::_optimiseTriangles<unsigned int>(unsigned
   int, unsigned int, unsigned int, unsigned int const*, unsigned int*)::TriangleScore, unsigned
   int*>, std::__ndk1::allocator<std::__ndk1::pair<GeometryUtil::_optimiseTriangles<unsigned
   int>(unsigned int, unsigned int, unsigned int, unsigned int const*, unsigned
   int*)::TriangleScore, unsigned int*> > > >::updateKey(unsigned int,
   GeometryUtil::_optimiseTriangles<unsigned int>(unsigned int, unsigned int, unsigned int, unsigned
   int const*, unsigned int*)::TriangleScore const&) */

void __thiscall
PriorityQueue<GeometryUtil::_optimiseTriangles<unsigned_int>(unsigned_int,unsigned_int,unsigned_int,unsigned_int_const*,unsigned_int*)::TriangleScore,unsigned_int,std::__ndk1::less<GeometryUtil::_optimiseTriangles<unsigned_int>(unsigned_int,unsigned_int,unsigned_int,unsigned_int_const*,unsigned_int*)::TriangleScore>,std::__ndk1::vector<std::__ndk1::pair<GeometryUtil::_optimiseTriangles<unsigned_int>(unsigned_int,unsigned_int,unsigned_int,unsigned_int_const*,unsigned_int*)::TriangleScore,unsigned_int*>,std::__ndk1::allocator<std::__ndk1::pair<GeometryUtil::_optimiseTriangles<unsigned_int>(unsigned_int,unsigned_int,unsigned_int,unsigned_int_const*,unsigned_int*)::TriangleScore,unsigned_int*>>>>
::updateKey(PriorityQueue<GeometryUtil::_optimiseTriangles<unsigned_int>(unsigned_int,unsigned_int,unsigned_int,unsigned_int_const*,unsigned_int*)::TriangleScore,unsigned_int,std::__ndk1::less<GeometryUtil::_optimiseTriangles<unsigned_int>(unsigned_int,unsigned_int,unsigned_int,unsigned_int_const*,unsigned_int*)::TriangleScore>,std::__ndk1::vector<std::__ndk1::pair<GeometryUtil::_optimiseTriangles<unsigned_int>(unsigned_int,unsigned_int,unsigned_int,unsigned_int_const*,unsigned_int*)::TriangleScore,unsigned_int*>,std::__ndk1::allocator<std::__ndk1::pair<GeometryUtil::_optimiseTriangles<unsigned_int>(unsigned_int,unsigned_int,unsigned_int,unsigned_int_const*,unsigned_int*)::TriangleScore,unsigned_int*>>>>
            *this,uint param_1,TriangleScore *param_2)

{
  undefined8 *puVar1;
  float *pfVar2;
  undefined8 *puVar3;
  float fVar4;
  uint uVar5;
  long lVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  undefined4 *puVar11;
  ulong uVar12;
  undefined8 uVar13;
  uint *puVar14;
  float fVar15;
  float fVar16;
  uint *local_50;
  long local_48;
  
  lVar6 = tpidr_el0;
  uVar9 = (ulong)param_1;
  local_48 = *(long *)(lVar6 + 0x28);
  lVar8 = *(long *)this;
  fVar15 = *(float *)(lVar8 + uVar9 * 0x10);
  if ((fVar15 < *(float *)param_2) ||
     ((fVar15 == *(float *)param_2 && (*(uint *)(param_2 + 4) < *(uint *)(lVar8 + uVar9 * 0x10 + 4))
      ))) {
    puVar14 = *(uint **)(lVar8 + uVar9 * 0x10 + 8);
    *puVar14 = 0xffffffff;
    if (param_1 != 0) {
      do {
        uVar7 = param_1 - 1;
        uVar5 = uVar7 >> 1;
        puVar1 = (undefined8 *)(lVar8 + (ulong)uVar5 * 0x10);
        puVar3 = (undefined8 *)(lVar8 + (ulong)param_1 * 0x10);
        uVar13 = puVar1[1];
        *puVar3 = *puVar1;
        puVar3[1] = uVar13;
        lVar8 = *(long *)this;
        **(uint **)(lVar8 + (ulong)param_1 * 0x10 + 8) = param_1;
        param_1 = uVar5;
      } while (1 < uVar7);
    }
    lVar10 = *(long *)(this + 8);
    if (0x10 < (ulong)(lVar10 - lVar8)) {
      uVar5 = (int)((ulong)(lVar10 - lVar8) >> 4) - 1;
      uVar7 = adjustDown(this,uVar5);
      puVar1 = (undefined8 *)(*(long *)this + (ulong)uVar5 * 0x10);
      puVar3 = (undefined8 *)(*(long *)this + (ulong)uVar7 * 0x10);
      uVar13 = puVar1[1];
      *puVar3 = *puVar1;
      puVar3[1] = uVar13;
      lVar8 = *(long *)this;
      **(uint **)(lVar8 + (ulong)uVar7 * 0x10 + 8) = uVar7;
      lVar10 = *(long *)(this + 8);
    }
    uVar9 = (ulong)((lVar10 + -0x10) - lVar8) >> 4;
    *(long *)(this + 8) = lVar10 + -0x10;
    local_50 = puVar14;
    if ((int)uVar9 != -1) {
      std::__ndk1::
      vector<std::__ndk1::pair<GeometryUtil::_optimiseTriangles<unsigned_int>(unsigned_int,unsigned_int,unsigned_int,unsigned_int_const*,unsigned_int*)::TriangleScore,unsigned_int*>,std::__ndk1::allocator<std::__ndk1::pair<GeometryUtil::_optimiseTriangles<unsigned_int>(unsigned_int,unsigned_int,unsigned_int,unsigned_int_const*,unsigned_int*)::TriangleScore,unsigned_int*>>>
      ::
      emplace_back<GeometryUtil::_optimiseTriangles<unsigned_int>(unsigned_int,unsigned_int,unsigned_int,unsigned_int_const*,unsigned_int*)::TriangleScore_const&,unsigned_int*&>
                ((vector<std::__ndk1::pair<GeometryUtil::_optimiseTriangles<unsigned_int>(unsigned_int,unsigned_int,unsigned_int,unsigned_int_const*,unsigned_int*)::TriangleScore,unsigned_int*>,std::__ndk1::allocator<std::__ndk1::pair<GeometryUtil::_optimiseTriangles<unsigned_int>(unsigned_int,unsigned_int,unsigned_int,unsigned_int_const*,unsigned_int*)::TriangleScore,unsigned_int*>>>
                  *)this,param_2,&local_50);
      fVar15 = *(float *)param_2;
      fVar4 = *(float *)(param_2 + 4);
      lVar8 = *(long *)this;
      if ((int)uVar9 == 0) {
        uVar12 = 0;
      }
      else {
        do {
          uVar5 = (int)uVar9 - 1;
          uVar12 = (ulong)(uVar5 >> 1);
          puVar1 = (undefined8 *)(lVar8 + uVar12 * 0x10);
          fVar16 = *(float *)puVar1;
          if ((fVar16 <= fVar15) &&
             ((fVar16 != fVar15 || ((uint)fVar4 <= (uint)*(float *)(lVar8 + uVar12 * 0x10 + 4))))) {
            uVar12 = uVar9 & 0xffffffff;
            break;
          }
          lVar10 = (uVar9 & 0xffffffff) * 0x10;
          puVar3 = (undefined8 *)(lVar8 + lVar10);
          uVar13 = *(undefined8 *)(lVar8 + uVar12 * 0x10 + 8);
          *puVar3 = *puVar1;
          puVar3[1] = uVar13;
          lVar8 = *(long *)this;
          **(int **)(lVar8 + lVar10 + 8) = (int)uVar9;
          uVar9 = uVar12;
        } while (1 < uVar5);
      }
      pfVar2 = (float *)(lVar8 + uVar12 * 0x10);
      *pfVar2 = fVar15;
      pfVar2[1] = fVar4;
      *(uint **)(pfVar2 + 2) = local_50;
      *local_50 = (uint)uVar12;
    }
  }
  else {
    fVar15 = *(float *)param_2;
    fVar4 = *(float *)(param_2 + 4);
    puVar11 = *(undefined4 **)(lVar8 + uVar9 * 0x10 + 8);
    if (param_1 == 0) {
      uVar9 = 0;
    }
    else {
      do {
        uVar7 = param_1 - 1;
        uVar5 = uVar7 >> 1;
        uVar9 = (ulong)uVar5;
        puVar1 = (undefined8 *)(lVar8 + uVar9 * 0x10);
        fVar16 = *(float *)puVar1;
        if ((fVar16 <= fVar15) &&
           ((fVar16 != fVar15 || ((uint)fVar4 <= (uint)*(float *)(lVar8 + uVar9 * 0x10 + 4))))) {
          uVar9 = (ulong)param_1;
          break;
        }
        puVar3 = (undefined8 *)(lVar8 + (ulong)param_1 * 0x10);
        uVar13 = *(undefined8 *)(lVar8 + uVar9 * 0x10 + 8);
        *puVar3 = *puVar1;
        puVar3[1] = uVar13;
        lVar8 = *(long *)this;
        **(uint **)(lVar8 + (ulong)param_1 * 0x10 + 8) = param_1;
        param_1 = uVar5;
      } while (1 < uVar7);
    }
    pfVar2 = (float *)(lVar8 + uVar9 * 0x10);
    *pfVar2 = fVar15;
    pfVar2[1] = fVar4;
    *(undefined4 **)(pfVar2 + 2) = puVar11;
    *puVar11 = (int)uVar9;
  }
  if (*(long *)(lVar6 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


