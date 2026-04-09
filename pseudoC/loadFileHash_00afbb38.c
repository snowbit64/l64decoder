// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadFileHash
// Entry Point: 00afbb38
// Size: 448 bytes
// Signature: undefined __thiscall loadFileHash(FileHashManager * this, char * param_1, char * param_2, File * param_3, FileHash * param_4)


/* FileHashManager::loadFileHash(char const*, char const*, File&, FileHashManager::FileHash&) */

void __thiscall
FileHashManager::loadFileHash
          (FileHashManager *this,char *param_1,char *param_2,File *param_3,FileHash *param_4)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  uchar *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  MD5Hash aMStack_138 [16];
  undefined auStack_128 [72];
  ulong local_e0;
  ulong uStack_d8;
  undefined *local_d0;
  undefined auStack_c8 [72];
  ulong local_80;
  ulong uStack_78;
  undefined *local_70;
  long local_68;
  
  lVar2 = tpidr_el0;
  local_68 = *(long *)(lVar2 + 0x28);
  uVar4 = (**(code **)(*(long *)param_3 + 0x48))(param_3);
  if ((long)uVar4 < 0) {
    uVar7 = 0;
    goto LAB_00afbcc4;
  }
  MD5Hash::MD5Hash(aMStack_138);
  if (uVar4 == 0) {
LAB_00afbbf0:
                    /* try { // try from 00afbbf4 to 00afbc13 has its CatchHandler @ 00afbcfc */
    if ((param_2 != (char *)0x0) && (uVar3 = __strlen_chk(param_2,0xffffffffffffffff), uVar3 != 0))
    {
      MD5Hash::add(aMStack_138,(uchar *)param_2,uVar3);
    }
                    /* try { // try from 00afbc18 to 00afbc3b has its CatchHandler @ 00afbd00 */
    MD5Hash::getMD5Hash(aMStack_138,(uchar *)(param_4 + 0x11));
    *(ulong *)(param_4 + 8) = uVar4;
    param_4[0x10] = (FileHash)0x1;
    uVar6 = (**(code **)(*(long *)param_3 + 0x58))(param_3);
    uVar7 = 1;
    *(undefined8 *)param_4 = uVar6;
  }
  else {
    uVar1 = uVar4;
    if (0xfffff < uVar4) {
      uVar1 = 0x100000;
    }
                    /* try { // try from 00afbba0 to 00afbba7 has its CatchHandler @ 00afbcf8 */
    puVar5 = (uchar *)operator_new__(uVar1);
                    /* try { // try from 00afbbb4 to 00afbbdf has its CatchHandler @ 00afbd04 */
    while (uVar3 = (**(code **)(*(long *)param_3 + 0x28))(param_3,puVar5,uVar1 & 0xffffffff),
          0 < (int)uVar3) {
      MD5Hash::add(aMStack_138,puVar5,uVar3);
    }
    operator_delete__(puVar5);
    if (-1 < (int)uVar3) goto LAB_00afbbf0;
    uVar7 = 0;
  }
  if (uStack_78 <= local_80) {
    local_80 = uStack_78;
  }
  if (local_70 == auStack_c8) {
    for (; local_80 != 0; local_80 = local_80 - 1) {
      *(undefined4 *)(local_70 + local_80 * 4 + -4) = 0;
    }
  }
  if (uStack_d8 <= local_e0) {
    local_e0 = uStack_d8;
  }
  if (local_d0 == auStack_128) {
    for (; local_e0 != 0; local_e0 = local_e0 - 1) {
      *(undefined4 *)(local_d0 + local_e0 * 4 + -4) = 0;
    }
  }
LAB_00afbcc4:
  if (*(long *)(lVar2 + 0x28) != local_68) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail(uVar7);
  }
  return;
}


