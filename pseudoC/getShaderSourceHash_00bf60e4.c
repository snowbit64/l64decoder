// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getShaderSourceHash
// Entry Point: 00bf60e4
// Size: 268 bytes
// Signature: undefined __thiscall getShaderSourceHash(CompiledShaderArchive * this, ShaderObjectDesc * param_1, ShaderHash * param_2)


/* CompiledShaderArchive::getShaderSourceHash(ShaderObjectDesc const&,
   CompiledShaderArchive::ShaderHash&) */

void __thiscall
CompiledShaderArchive::getShaderSourceHash
          (CompiledShaderArchive *this,ShaderObjectDesc *param_1,ShaderHash *param_2)

{
  long lVar1;
  uint uVar2;
  uchar *puVar3;
  MD5Hash aMStack_118 [16];
  undefined auStack_108 [72];
  ulong local_c0;
  ulong uStack_b8;
  undefined *local_b0;
  undefined auStack_a8 [72];
  ulong local_60;
  ulong uStack_58;
  undefined *local_50;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  MD5Hash::MD5Hash(aMStack_118);
  puVar3 = *(uchar **)param_1;
                    /* try { // try from 00bf611c to 00bf6157 has its CatchHandler @ 00bf61f0 */
  uVar2 = __strlen_chk(puVar3,0xffffffffffffffff);
  MD5Hash::add(aMStack_118,puVar3,uVar2);
  MD5Hash::add(aMStack_118,(uchar *)(param_1 + 0x10c),4);
  MD5Hash::getMD5Hash(aMStack_118,(uchar *)param_2);
  if (uStack_58 <= local_60) {
    local_60 = uStack_58;
  }
  if (local_50 == auStack_a8) {
    for (; local_60 != 0; local_60 = local_60 - 1) {
      *(undefined4 *)(local_50 + local_60 * 4 + -4) = 0;
    }
  }
  if (uStack_b8 <= local_c0) {
    local_c0 = uStack_b8;
  }
  if (local_b0 == auStack_108) {
    for (; local_c0 != 0; local_c0 = local_c0 - 1) {
      *(undefined4 *)(local_b0 + local_c0 * 4 + -4) = 0;
    }
  }
  if (*(long *)(lVar1 + 0x28) != local_48) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}


