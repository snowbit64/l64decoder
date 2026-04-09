// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: readFileHashes
// Entry Point: 00afb1f4
// Size: 612 bytes
// Signature: undefined readFileHashes(void)


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* FileHashManager::readFileHashes() */

undefined4 FileHashManager::readFileHashes(void)

{
  long lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *in_x0;
  ulong uVar5;
  uchar *puVar6;
  ACCESS_MODE AVar7;
  undefined4 uVar8;
  undefined8 *puVar9;
  NativeFile aNStack_1b8 [40];
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined local_170;
  undefined8 local_16f;
  undefined8 uStack_167;
  ulong local_158;
  ulong uStack_150;
  MD5Hash aMStack_148 [16];
  undefined auStack_138 [72];
  ulong local_f0;
  ulong uStack_e8;
  undefined *local_e0;
  undefined auStack_d8 [72];
  ulong local_90;
  ulong uStack_88;
  undefined *local_80;
  int local_78;
  int local_74;
  ulong local_70;
  ulong uStack_68;
  uint local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  NativeFile::NativeFile(aNStack_1b8);
  AVar7 = (ACCESS_MODE)*(undefined8 *)(in_x0 + 0x10);
  if ((*in_x0 & 1) == 0) {
    AVar7 = (int)in_x0 + 1;
  }
                    /* try { // try from 00afb238 to 00afb247 has its CatchHandler @ 00afb484 */
  uVar5 = NativeFile::open((char *)aNStack_1b8,AVar7,false);
                    /* try { // try from 00afb24c to 00afb253 has its CatchHandler @ 00afb480 */
                    /* try { // try from 00afb260 to 00afb26f has its CatchHandler @ 00afb47c */
  if ((((uVar5 & 1) != 0) && (uVar2 = NativeFile::getSize(), 0x1c < uVar2)) &&
     (iVar3 = NativeFile::read(aNStack_1b8,&local_78,0x1c), iVar3 == 0x1c)) {
    uVar8 = 0;
    if ((local_78 != 0x5a694e21) || (local_74 != 0)) goto LAB_00afb3a8;
    uVar2 = uVar2 - 0x1c;
                    /* try { // try from 00afb29c to 00afb2b7 has its CatchHandler @ 00afb478 */
    puVar6 = (uchar *)operator_new__((ulong)uVar2);
    uVar4 = NativeFile::read(aNStack_1b8,puVar6,uVar2);
    if (uVar4 == uVar2) {
                    /* try { // try from 00afb2c0 to 00afb2c7 has its CatchHandler @ 00afb460 */
      MD5Hash::MD5Hash(aMStack_148);
                    /* try { // try from 00afb2c8 to 00afb2eb has its CatchHandler @ 00afb464 */
      MD5Hash::add(aMStack_148,CHECKSUM_SALT,0x40);
      MD5Hash::add(aMStack_148,puVar6,uVar2);
                    /* try { // try from 00afb2ec to 00afb2f7 has its CatchHandler @ 00afb45c */
      MD5Hash::getMD5Hash(aMStack_148,(uchar *)&local_158);
      if (((local_158 ^ local_70 | uStack_150 ^ uStack_68) == 0) && (local_60 * 0x30 <= uVar2)) {
                    /* try { // try from 00afb3e4 to 00afb3eb has its CatchHandler @ 00afb458 */
        Mutex::enterCriticalSection();
        if (local_60 != 0) {
          uVar2 = 0;
          puVar9 = (undefined8 *)(puVar6 + 0x20);
          do {
            uStack_188 = puVar9[-3];
            local_190 = puVar9[-4];
            uStack_167 = puVar9[-1];
            local_16f = puVar9[-2];
            local_170 = 0;
            local_180 = *puVar9;
            uStack_178 = puVar9[1];
                    /* try { // try from 00afb420 to 00afb42f has its CatchHandler @ 00afb468 */
            std::__ndk1::
            __tree<std::__ndk1::__value_type<FileHashManager::FilenameHash,FileHashManager::FileHash>,std::__ndk1::__map_value_compare<FileHashManager::FilenameHash,std::__ndk1::__value_type<FileHashManager::FilenameHash,FileHashManager::FileHash>,std::__ndk1::less<FileHashManager::FilenameHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<FileHashManager::FilenameHash,FileHashManager::FileHash>>>
            ::
            __emplace_unique_key_args<FileHashManager::FilenameHash,std::__ndk1::pair<FileHashManager::FilenameHash,FileHashManager::FileHash>>
                      ((__tree<std::__ndk1::__value_type<FileHashManager::FilenameHash,FileHashManager::FileHash>,std::__ndk1::__map_value_compare<FileHashManager::FilenameHash,std::__ndk1::__value_type<FileHashManager::FilenameHash,FileHashManager::FileHash>,std::__ndk1::less<FileHashManager::FilenameHash>,true>,std::__ndk1::allocator<std::__ndk1::__value_type<FileHashManager::FilenameHash,FileHashManager::FileHash>>>
                        *)(in_x0 + 0x18),(FilenameHash *)&local_190,(pair *)&local_190);
            uVar2 = uVar2 + 1;
            puVar9 = puVar9 + 6;
          } while (uVar2 < local_60);
        }
                    /* try { // try from 00afb444 to 00afb44b has its CatchHandler @ 00afb458 */
        Mutex::leaveCriticalSection();
        uVar8 = 1;
      }
      else {
        uVar8 = 0;
      }
      operator_delete__(puVar6);
      if (uStack_88 <= local_90) {
        local_90 = uStack_88;
      }
      if (local_80 == auStack_d8) {
        for (; local_90 != 0; local_90 = local_90 - 1) {
          *(undefined4 *)(local_80 + local_90 * 4 + -4) = 0;
        }
      }
      if (uStack_e8 <= local_f0) {
        local_f0 = uStack_e8;
      }
      if (local_e0 == auStack_138) {
        for (; local_f0 != 0; local_f0 = local_f0 - 1) {
          *(undefined4 *)(local_e0 + local_f0 * 4 + -4) = 0;
        }
      }
      goto LAB_00afb3a8;
    }
    operator_delete__(puVar6);
  }
  uVar8 = 0;
LAB_00afb3a8:
  NativeFile::~NativeFile(aNStack_1b8);
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar8;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


