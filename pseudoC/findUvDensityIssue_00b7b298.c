// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findUvDensityIssue
// Entry Point: 00b7b298
// Size: 316 bytes
// Signature: undefined __thiscall findUvDensityIssue(IndexedTriangleSet * this, basic_string * param_1, uint * param_2, uint * param_3)


/* IndexedTriangleSet::findUvDensityIssue(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> >&, unsigned int&, unsigned int&)
   const */

bool __thiscall
IndexedTriangleSet::findUvDensityIssue
          (IndexedTriangleSet *this,basic_string *param_1,uint *param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  bool bVar7;
  float fVar8;
  long lVar9;
  ulong uVar10;
  ulong uVar11;
  uint uVar12;
  uint uVar13;
  long lVar14;
  float fVar15;
  
  bVar7 = true;
  uVar5 = *(uint *)(this + 0x78);
  lVar14 = *(long *)(this + 0x80);
  uVar10 = 0;
  do {
    if (*(long *)(this + uVar10 * 8 + 0x18) != 0 && uVar5 != 0) {
      uVar11 = 0;
      do {
        lVar9 = *(long *)(lVar14 + uVar11 * 8);
        uVar13 = *(uint *)(lVar9 + 8);
        iVar4 = *(int *)(lVar9 + 0xc);
        uVar2 = iVar4 + uVar13;
        if (iVar4 != 0 && uVar13 < uVar2) {
          fVar8 = 3.402823e+38;
          uVar12 = 0;
          do {
            fVar15 = (float)computeTriangleUvDensity(this,(uint)uVar10,uVar13);
            bVar6 = fVar8 <= fVar15;
            uVar1 = uVar13 + 3;
            if (bVar6) {
              fVar15 = fVar8;
            }
            fVar8 = fVar15;
            uVar3 = uVar13 / 3;
            if (bVar6) {
              uVar3 = uVar12;
            }
            uVar13 = uVar1;
            uVar12 = uVar3;
          } while (uVar1 < uVar2);
          if (fVar8 < 0.0001) {
            *param_3 = uVar3;
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((char *)param_1);
            *param_2 = (uint)uVar10;
            return bVar7;
          }
        }
        uVar11 = uVar11 + 1;
      } while (uVar11 != uVar5);
    }
    uVar11 = uVar10 + 1;
    bVar7 = uVar10 < 3;
    uVar10 = uVar11;
    if (uVar11 == 4) {
      return bVar7;
    }
  } while( true );
}


