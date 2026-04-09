// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: findNearestCompiledShader
// Entry Point: 009541b8
// Size: 620 bytes
// Signature: undefined __thiscall findNearestCompiledShader(MaterialShaderManager * this, MaterialShaderHash * param_1, MaterialShaderHash * param_2)


/* MaterialShaderManager::findNearestCompiledShader(MaterialShaderHash const&, MaterialShaderHash&)
    */

undefined4 __thiscall
MaterialShaderManager::findNearestCompiledShader
          (MaterialShaderManager *this,MaterialShaderHash *param_1,MaterialShaderHash *param_2)

{
  long **pplVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 uVar10;
  ulong uVar11;
  ulong *puVar12;
  long **pplVar13;
  ulong uVar14;
  long **pplVar15;
  long *plVar16;
  uint uVar17;
  long **pplVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  
  iVar2 = *(int *)(param_1 + 4);
  uVar20 = *(ulong *)(param_1 + 8);
  if (((ShaderManager::getInstance()::instance & 1) == 0) &&
     (iVar6 = __cxa_guard_acquire(&ShaderManager::getInstance()::instance), iVar6 != 0)) {
                    /* try { // try from 009543ec to 009543f7 has its CatchHandler @ 00954424 */
    ShaderManager::ShaderManager((ShaderManager *)&ShaderManager::getInstance()::instance);
    __cxa_atexit(ShaderManager::~ShaderManager,&ShaderManager::getInstance()::instance,
                 &PTR_LOOP_00fd8de0);
    __cxa_guard_release(&ShaderManager::getInstance()::instance);
  }
  pplVar1 = (long **)(ShaderManager::getInstance()::instance + 0x50);
  if (*(long ***)(ShaderManager::getInstance()::instance + 0x48) == pplVar1) {
    uVar10 = 0;
  }
  else {
    uVar10 = 0;
    uVar19 = 0xffffffff;
    uVar5 = 0xffffffff;
    uVar7 = 0xffffffff;
    uVar8 = 0xffffffff;
    pplVar18 = *(long ***)(ShaderManager::getInstance()::instance + 0x48);
    do {
      uVar21 = uVar19;
      uVar17 = uVar7;
      uVar9 = uVar8;
      if (*(int *)(pplVar18 + 4) == 0x10) {
        puVar12 = (ulong *)pplVar18[5];
        if ((int)(*puVar12 >> 0x20) != iVar2) goto LAB_0095436c;
        uVar21 = (uint)uVar20 & 0x7f ^ (uint)puVar12[1];
        uVar11 = puVar12[1] ^ uVar20;
        uVar14 = *(ulong *)param_1 ^ *puVar12;
        uVar21 = uVar21 - (uVar21 >> 1 & 0x55555555);
        uVar14 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
        uVar21 = (uVar21 >> 2 & 0x33333333) + (uVar21 & 0x33333333);
        uVar17 = ((uint)(uVar11 >> 0x12) & 0xffff) - ((uint)(uVar11 >> 0x12) >> 1 & 0x5555);
        uVar14 = (uVar14 >> 2 & 0x3333333333333333) + (uVar14 & 0x3333333333333333);
        uVar9 = ((uint)uVar11 >> 7 & 0x7ff) - ((uint)uVar11 >> 8 & 0x155);
        uVar17 = (uVar17 >> 2 & 0x33333333) + (uVar17 & 0x33333333);
        uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333);
        uVar21 = (uVar21 + (uVar21 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
        bVar3 = (byte)((uVar14 + (uVar14 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38);
        uVar17 = (uVar17 + (uVar17 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
        uVar9 = (uVar9 + (uVar9 >> 4) & 0xf0f0f0f) * 0x1010101 >> 0x18;
        uVar4 = (uint)bVar3;
        if ((((uVar21 < uVar19) || (uVar21 = uVar19, uVar4 = (uint)bVar3, bVar3 < uVar5)) ||
            (uVar4 = uVar5, uVar17 < uVar7)) || (uVar17 = uVar7, uVar9 < uVar8)) {
          uVar5 = uVar4;
          uVar14 = *puVar12;
          uVar10 = 1;
          *(ulong *)(param_2 + 8) = puVar12[1];
          *(ulong *)param_2 = uVar14;
          goto LAB_0095436c;
        }
        uVar10 = 1;
        pplVar13 = (long **)pplVar18[1];
        if ((long **)pplVar18[1] == (long **)0x0) goto LAB_00954390;
LAB_00954374:
        do {
          pplVar15 = pplVar13;
          pplVar13 = (long **)*pplVar15;
        } while (*pplVar15 != (long *)0x0);
      }
      else {
LAB_0095436c:
        pplVar13 = (long **)pplVar18[1];
        uVar19 = uVar21;
        uVar7 = uVar17;
        uVar8 = uVar9;
        if ((long **)pplVar18[1] != (long **)0x0) goto LAB_00954374;
LAB_00954390:
        pplVar13 = pplVar18 + 2;
        pplVar15 = (long **)*pplVar13;
        if ((long **)*pplVar15 != pplVar18) {
          do {
            plVar16 = *pplVar13;
            pplVar13 = (long **)(plVar16 + 2);
            pplVar15 = (long **)*pplVar13;
          } while (*pplVar15 != plVar16);
        }
      }
      pplVar18 = pplVar15;
    } while (pplVar15 != pplVar1);
  }
  return uVar10;
}


