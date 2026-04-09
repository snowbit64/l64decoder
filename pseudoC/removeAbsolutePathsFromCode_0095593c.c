// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: removeAbsolutePathsFromCode
// Entry Point: 0095593c
// Size: 356 bytes
// Signature: undefined __thiscall removeAbsolutePathsFromCode(MaterialShaderManager * this, basic_string * param_1)


/* MaterialShaderManager::removeAbsolutePathsFromCode(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&) */

void __thiscall
MaterialShaderManager::removeAbsolutePathsFromCode
          (MaterialShaderManager *this,basic_string *param_1)

{
  uint *puVar1;
  ulong uVar2;
  MaterialShaderManager *pMVar3;
  MaterialShaderManager MVar4;
  MaterialShaderManager *pMVar5;
  uint *puVar6;
  uint *puVar7;
  undefined8 *in_x8;
  ulong uVar8;
  long lVar9;
  
  uVar2 = *(ulong *)(this + 8);
  pMVar3 = *(MaterialShaderManager **)(this + 0x10);
  MVar4 = *this;
  *in_x8 = 0;
  in_x8[1] = 0;
  if (((byte)MVar4 & 1) == 0) {
    pMVar3 = this + 1;
    uVar2 = (ulong)((byte)MVar4 >> 1);
  }
  in_x8[2] = 0;
  if (4 < (long)uVar2) {
    puVar1 = (uint *)(pMVar3 + uVar2);
    pMVar5 = pMVar3;
    uVar8 = uVar2;
    while (puVar6 = (uint *)memchr(pMVar5,0x23,uVar8 - 4), puVar6 != (uint *)0x0) {
      if ((*puVar6 ^ 0x6e696c23 | *(byte *)(puVar6 + 1) ^ 0x65) == 0) {
        if ((puVar6 != puVar1) && (uVar8 = (long)puVar6 - (long)pMVar3, uVar8 != 0xffffffffffffffff)
           ) {
          if (uVar2 < uVar8) {
            lVar9 = -1;
            goto LAB_00955a6c;
          }
          pMVar5 = pMVar3 + uVar8;
          while (((puVar6 = puVar1, 0 < (long)puVar1 - (long)pMVar5 &&
                  (puVar7 = (uint *)memchr(pMVar5,10,(long)puVar1 - (long)pMVar5),
                  puVar7 != (uint *)0x0)) && (puVar6 = puVar7, *(char *)puVar7 != '\n'))) {
            pMVar5 = (MaterialShaderManager *)((long)puVar7 + 1);
          }
          lVar9 = (long)puVar6 - (long)pMVar3;
          if (puVar6 == puVar1) {
            lVar9 = -1;
          }
          if (uVar8 != 0) {
LAB_00955a6c:
                    /* try { // try from 00955a6c to 00955a9b has its CatchHandler @ 00955aa0 */
            std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::assign
                      ((basic_string *)in_x8,(ulong)this,0);
          }
          if (lVar9 == -1) {
            return;
          }
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((basic_string *)in_x8,(ulong)this,lVar9 + 1);
          return;
        }
        break;
      }
      pMVar5 = (MaterialShaderManager *)((long)puVar6 + 1);
      uVar8 = (long)puVar1 - (long)pMVar5;
      if ((long)uVar8 < 5) break;
    }
  }
                    /* try { // try from 009559fc to 00955a07 has its CatchHandler @ 00955aa4 */
  std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
  operator=((basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>> *)in_x8,
            (basic_string *)this);
  return;
}


