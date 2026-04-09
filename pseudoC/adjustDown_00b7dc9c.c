// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: adjustDown
// Entry Point: 00b7dc9c
// Size: 388 bytes
// Signature: undefined __thiscall adjustDown(PriorityQueue<GeometryUtil::_optimiseTriangles<unsigned_short>(unsigned_int,unsigned_int,unsigned_int,unsigned_short_const*,unsigned_short*)::TriangleScore,unsigned_int,std::__ndk1::less<GeometryUtil::_optimiseTriangles<unsigned_short>(unsigned_int,unsigned_int,unsigned_int,unsigned_short_const*,unsigned_short*)::TriangleScore>,std::__ndk1::vector<std::__ndk1::pair<GeometryUtil::_optimiseTriangles<unsigned_short>(unsigned_int,unsigned_int,unsigned_int,unsigned_short_const*,unsigned_short*)::TriangleScore,unsigned_int*>,std::__ndk1::allocator<std::__ndk1::pair<GeometryUtil::_optimiseTriangles<unsigned_short>(unsigned_int,unsigned_int,unsigned_int,unsigned_short_const*,unsigned_short*)::TriangleScore,unsigned_int*>>>> * this, uint param_1)


/* PriorityQueue<GeometryUtil::_optimiseTriangles<unsigned short>(unsigned int, unsigned int,
   unsigned int, unsigned short const*, unsigned short*)::TriangleScore, unsigned int,
   std::__ndk1::less<GeometryUtil::_optimiseTriangles<unsigned short>(unsigned int, unsigned int,
   unsigned int, unsigned short const*, unsigned short*)::TriangleScore>,
   std::__ndk1::vector<std::__ndk1::pair<GeometryUtil::_optimiseTriangles<unsigned short>(unsigned
   int, unsigned int, unsigned int, unsigned short const*, unsigned short*)::TriangleScore, unsigned
   int*>, std::__ndk1::allocator<std::__ndk1::pair<GeometryUtil::_optimiseTriangles<unsigned
   short>(unsigned int, unsigned int, unsigned int, unsigned short const*, unsigned
   short*)::TriangleScore, unsigned int*> > > >::adjustDown(unsigned int) */

ulong __thiscall
PriorityQueue<GeometryUtil::_optimiseTriangles<unsigned_short>(unsigned_int,unsigned_int,unsigned_int,unsigned_short_const*,unsigned_short*)::TriangleScore,unsigned_int,std::__ndk1::less<GeometryUtil::_optimiseTriangles<unsigned_short>(unsigned_int,unsigned_int,unsigned_int,unsigned_short_const*,unsigned_short*)::TriangleScore>,std::__ndk1::vector<std::__ndk1::pair<GeometryUtil::_optimiseTriangles<unsigned_short>(unsigned_int,unsigned_int,unsigned_int,unsigned_short_const*,unsigned_short*)::TriangleScore,unsigned_int*>,std::__ndk1::allocator<std::__ndk1::pair<GeometryUtil::_optimiseTriangles<unsigned_short>(unsigned_int,unsigned_int,unsigned_int,unsigned_short_const*,unsigned_short*)::TriangleScore,unsigned_int*>>>>
::adjustDown(PriorityQueue<GeometryUtil::_optimiseTriangles<unsigned_short>(unsigned_int,unsigned_int,unsigned_int,unsigned_short_const*,unsigned_short*)::TriangleScore,unsigned_int,std::__ndk1::less<GeometryUtil::_optimiseTriangles<unsigned_short>(unsigned_int,unsigned_int,unsigned_int,unsigned_short_const*,unsigned_short*)::TriangleScore>,std::__ndk1::vector<std::__ndk1::pair<GeometryUtil::_optimiseTriangles<unsigned_short>(unsigned_int,unsigned_int,unsigned_int,unsigned_short_const*,unsigned_short*)::TriangleScore,unsigned_int*>,std::__ndk1::allocator<std::__ndk1::pair<GeometryUtil::_optimiseTriangles<unsigned_short>(unsigned_int,unsigned_int,unsigned_int,unsigned_short_const*,unsigned_short*)::TriangleScore,unsigned_int*>>>>
             *this,uint param_1)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong uVar3;
  long lVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  undefined8 uVar10;
  float fVar11;
  float fVar12;
  
  uVar5 = (ulong)param_1;
  if (param_1 < 3) {
    uVar6 = 0;
    uVar3 = 1;
    if (param_1 < 2) {
      return 0;
    }
  }
  else {
    lVar7 = *(long *)this;
    uVar8 = 2;
    uVar3 = 0;
    do {
      fVar11 = *(float *)(lVar7 + (ulong)(uVar8 - 1) * 0x10);
      fVar12 = *(float *)(lVar7 + (ulong)uVar8 * 0x10);
      if (fVar12 <= fVar11) {
        if (fVar11 == fVar12) {
          uVar9 = (uint)(*(uint *)(lVar7 + (ulong)uVar8 * 0x10 + 4) <
                        *(uint *)(lVar7 + (ulong)(uVar8 - 1) * 0x10 + 4));
        }
        else {
          uVar9 = 0;
        }
      }
      else {
        uVar9 = 1;
      }
      uVar6 = (ulong)(uVar8 - uVar9);
      fVar11 = *(float *)(lVar7 + uVar5 * 0x10);
      puVar1 = (undefined8 *)(lVar7 + uVar6 * 0x10);
      fVar12 = *(float *)puVar1;
      if ((fVar11 <= fVar12) &&
         ((fVar12 != fVar11 ||
          (*(uint *)(lVar7 + uVar6 * 0x10 + 4) <= *(uint *)(lVar7 + uVar5 * 0x10 + 4))))) {
        return uVar3;
      }
      puVar2 = (undefined8 *)(lVar7 + uVar3 * 0x10);
      uVar10 = *(undefined8 *)(lVar7 + uVar6 * 0x10 + 8);
      *puVar2 = *puVar1;
      lVar7 = *(long *)this;
      puVar2[1] = uVar10;
      uVar9 = (uVar8 - uVar9) * 2;
      **(undefined4 **)(lVar7 + uVar3 * 0x10 + 8) = (int)uVar3;
      uVar8 = uVar9 + 2;
      uVar3 = uVar6;
    } while (uVar8 < param_1);
    uVar9 = uVar9 | 1;
    uVar3 = (ulong)uVar9;
    if (param_1 <= uVar9) {
      return uVar6;
    }
  }
  lVar7 = *(long *)this;
  puVar1 = (undefined8 *)(lVar7 + uVar3 * 0x10);
  fVar11 = *(float *)(lVar7 + uVar5 * 0x10);
  fVar12 = *(float *)puVar1;
  if ((fVar11 <= fVar12) &&
     ((fVar12 != fVar11 ||
      (*(uint *)(lVar7 + uVar3 * 0x10 + 4) <= *(uint *)(lVar7 + uVar5 * 0x10 + 4))))) {
    return uVar6;
  }
  puVar2 = (undefined8 *)(lVar7 + uVar6 * 0x10);
  *puVar2 = *puVar1;
  lVar4 = *(long *)this;
  puVar2[1] = *(undefined8 *)(lVar7 + uVar3 * 0x10 + 8);
  **(undefined4 **)(lVar4 + uVar6 * 0x10 + 8) = (int)uVar6;
  return uVar3;
}


