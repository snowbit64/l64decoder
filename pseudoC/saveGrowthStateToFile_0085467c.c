// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveGrowthStateToFile
// Entry Point: 0085467c
// Size: 656 bytes
// Signature: undefined __thiscall saveGrowthStateToFile(FieldCropsUpdater * this, char * param_1)


/* FieldCropsUpdater::saveGrowthStateToFile(char const*) */

void __thiscall FieldCropsUpdater::saveGrowthStateToFile(FieldCropsUpdater *this,char *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  uint uVar5;
  int *piVar6;
  ulong uVar7;
  float fVar8;
  char *local_288;
  uchar *local_280;
  uint local_274;
  ulong local_270;
  undefined8 uStack_268;
  undefined8 *local_260;
  undefined auStack_258 [512];
  long local_58;
  
  lVar2 = tpidr_el0;
  local_58 = *(long *)(lVar2 + 0x28);
  plVar4 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,param_1,1,
                                    false);
  if (plVar4 != (long *)0x0) {
    local_260 = (undefined8 *)operator_new(0x30);
    fVar8 = *(float *)(this + 0xd20);
    *(undefined *)((long)local_260 + 0x2d) = 0;
    local_260[1] = 0x31223d6e6f697372;
    *local_260 = 0x6576206c6d783f3c;
    local_260[3] = 0x7369223d676e6964;
    local_260[2] = 0x6f636e652022302e;
    *(undefined8 *)((long)local_260 + 0x25) = 0xa0a3e3f22312d39;
    *(undefined8 *)((long)local_260 + 0x1d) = 0x3538382d6f736922;
    uStack_268 = 0x2d;
    local_270 = 0x31;
    FUN_0085493c((double)fVar8,auStack_258);
                    /* try { // try from 00854718 to 00854723 has its CatchHandler @ 00854914 */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_270);
    uVar5 = 0;
    do {
      if ((*(int *)(this + (ulong)uVar5 * 100 + 0x60) != 0) &&
         (0.0 < *(float *)(this + (ulong)uVar5 * 100 + 0x7c))) {
        FUN_0085493c((double)(*(float *)(this + (ulong)uVar5 * 100 + 0x74) /
                             *(float *)(this + (ulong)uVar5 * 100 + 0x7c)),auStack_258);
                    /* try { // try from 00854788 to 00854793 has its CatchHandler @ 00854920 */
        std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
        ::append((char *)&local_270);
      }
      uVar5 = uVar5 + 1;
    } while (uVar5 <= *(uint *)(this + 0x58));
    uVar5 = *(int *)(this + 0xd0c) * *(int *)(this + 0xd0c);
    uVar7 = (ulong)uVar5;
    if (uVar5 != 0) {
      piVar6 = *(int **)(this + 0xcf8);
      do {
        if (*piVar6 != 0) {
                    /* try { // try from 008547cc to 008547d3 has its CatchHandler @ 0085490c */
          local_274 = LZMACompressionUtil::getCompressionBufferSize
                                ((uchar *)*(int **)(this + 0xcf8),uVar5 * 4);
                    /* try { // try from 008547dc to 00854803 has its CatchHandler @ 00854910 */
          local_280 = (uchar *)operator_new__((ulong)local_274);
          LZMACompressionUtil::compress
                    (*(uchar **)(this + 0xcf8),uVar5 * 4,&local_280,&local_274,false);
          local_288 = (char *)0x0;
                    /* try { // try from 00854810 to 00854863 has its CatchHandler @ 00854918 */
          StringUtil::base64Encode(local_280,local_274,false,&local_288);
          if (local_280 != (uchar *)0x0) {
            operator_delete__(local_280);
          }
          FUN_0085493c(auStack_258);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((char *)&local_270);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((char *)&local_270);
          std::__ndk1::
          basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                    ((char *)&local_270);
          if (local_288 != (char *)0x0) {
            operator_delete__(local_288);
          }
          break;
        }
        piVar6 = piVar6 + 1;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
                    /* try { // try from 00854870 to 008548b3 has its CatchHandler @ 0085491c */
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    append((char *)&local_270);
    bVar3 = (local_270 & 1) != 0;
    puVar1 = (undefined8 *)((ulong)&local_270 | 1);
    if (bVar3) {
      puVar1 = local_260;
    }
    uVar5 = (uint)((byte)local_270 >> 1);
    if (bVar3) {
      uVar5 = (uint)uStack_268;
    }
    (**(code **)(*plVar4 + 0x30))(plVar4,puVar1,uVar5);
    (**(code **)(*plVar4 + 8))(plVar4);
    if ((local_270 & 1) != 0) {
      operator_delete(local_260);
    }
  }
  if (*(long *)(lVar2 + 0x28) != local_58) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(plVar4 != (long *)0x0);
  }
  return;
}


