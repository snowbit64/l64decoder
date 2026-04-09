// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: loadImage
// Entry Point: 00a9878c
// Size: 424 bytes
// Signature: undefined __cdecl loadImage(char * param_1, uchar * param_2, uint param_3, ORIGIN param_4, ImageDesc * param_5)


/* JPEGUtil::loadImage(char const*, unsigned char*, unsigned int, ImageDesc::ORIGIN, ImageDesc&) */

undefined4
JPEGUtil::loadImage(char *param_1,uchar *param_2,uint param_3,ORIGIN param_4,ImageDesc *param_5)

{
  long lVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined4 uVar6;
  undefined8 local_490;
  code **local_488;
  undefined8 *local_468;
  undefined2 local_430;
  code *local_218 [2];
  code *local_208;
  __jmp_buf_tag _Stack_170;
  ulong local_70;
  undefined8 local_68;
  void *local_60;
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  local_68 = 0;
  local_70 = 0;
  local_60 = (void *)0x0;
                    /* try { // try from 00a987d0 to 00a987db has its CatchHandler @ 00a98934 */
  local_490 = jpeg_std_error(local_218);
  local_218[0] = JpegErrorExit;
  local_208 = OutputMsg;
                    /* try { // try from 00a98800 to 00a988ef has its CatchHandler @ 00a98938 */
  iVar2 = setjmp(&_Stack_170);
  if (iVar2 == 0) {
    jpeg_CreateDecompress(&local_490,0x5a,0x278);
    local_430 = 0x101;
    if (local_468 == (undefined8 *)0x0) {
      puVar3 = (undefined8 *)(**local_488)(&local_490,0,0x58);
      puVar3[9] = param_2;
      *(uint *)(puVar3 + 10) = param_3;
      *(undefined4 *)((long)puVar3 + 0x54) = 0;
      local_468 = puVar3;
      uVar4 = (**local_488)(&local_490,0,0x1000);
      puVar3[7] = uVar4;
    }
    local_468[2] = init_source;
    local_468[3] = fill_input_buffer;
    *local_468 = 0;
    local_468[1] = 0;
    local_468[4] = skip_input_data;
    local_468[5] = jpeg_resync_to_restart;
    local_468[6] = term_source;
    jpeg_read_header(&local_490,1);
    uVar5 = loadFromJpegStruct(&local_490,param_4,param_5);
    if ((uVar5 & 1) != 0) {
      jpeg_finish_decompress(&local_490);
      uVar6 = 1;
      goto LAB_00a988e8;
    }
  }
  uVar6 = 0;
LAB_00a988e8:
  jpeg_destroy_decompress(&local_490);
  if ((local_70 & 1) != 0) {
    operator_delete(local_60);
  }
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return uVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


