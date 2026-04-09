// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: encode
// Entry Point: 00b970f8
// Size: 316 bytes
// Signature: undefined __cdecl encode(BitVector * param_1, uint param_2, uint param_3, uint param_4, File * param_5, uint * param_6)


/* RLEUtil::encode(BitVector const*, unsigned int, unsigned int, unsigned int, File*, unsigned int&)
    */

void RLEUtil::encode(BitVector *param_1,uint param_2,uint param_3,uint param_4,File *param_5,
                    uint *param_6)

{
  long lVar1;
  ulong uVar2;
  uint local_68 [2];
  File *local_60;
  void *local_58;
  undefined4 local_50;
  undefined local_4c;
  long local_48;
  
  lVar1 = tpidr_el0;
  local_48 = *(long *)(lVar1 + 0x28);
  if (param_4 < 9) {
    local_68[0] = 0;
    local_58 = (void *)0x0;
    local_60 = param_5;
    uVar2 = (**(code **)(*(long *)param_5 + 0x60))(param_5);
    if ((uVar2 & 1) == 0) {
      local_58 = operator_new__(0x20000);
    }
    local_50 = 0;
    local_4c = 0;
                    /* try { // try from 00b97168 to 00b9718b has its CatchHandler @ 00b97238 */
    _encode<BitVector,unsigned_char,CompressedIoUtil::CompressedFileOutput<unsigned_char>>
              (param_1,param_2,param_3,param_4,(CompressedFileOutput *)local_68,false);
    CompressedIoUtil::CompressedFileOutput<unsigned_char>::finishWriting();
  }
  else {
    if (0x10 < param_4) {
      *param_6 = 0;
      goto LAB_00b97208;
    }
    local_68[0] = 0;
    local_58 = (void *)0x0;
    local_60 = param_5;
    uVar2 = (**(code **)(*(long *)param_5 + 0x60))(param_5);
    if ((uVar2 & 1) == 0) {
      local_58 = operator_new__(0x20000);
    }
    local_50 = 0;
    local_4c = 0;
                    /* try { // try from 00b971c8 to 00b971eb has its CatchHandler @ 00b97234 */
    _encode<BitVector,unsigned_short,CompressedIoUtil::CompressedFileOutput<unsigned_short>>
              (param_1,param_2,param_3,param_4,(CompressedFileOutput *)local_68,false);
    CompressedIoUtil::CompressedFileOutput<unsigned_short>::finishWriting();
  }
  *param_6 = local_68[0];
  if (local_58 != (void *)0x0) {
    operator_delete__(local_58);
  }
LAB_00b97208:
  if (*(long *)(lVar1 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


