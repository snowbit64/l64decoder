// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: exportToObj
// Entry Point: 00b7589c
// Size: 1352 bytes
// Signature: undefined __cdecl exportToObj(Brep * param_1, char * param_2, char * param_3, float param_4)


/* BrepUtil::exportToObj(Brep const*, char const*, char const*, float) */

uint BrepUtil::exportToObj(Brep *param_1,char *param_2,char *param_3,float param_4)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long local_c0 [5];
  undefined auStack_98 [32];
  long local_78;
  
  lVar1 = tpidr_el0;
  local_78 = *(long *)(lVar1 + 0x28);
  NativeFile::NativeFile((NativeFile *)local_c0);
                    /* try { // try from 00b758e4 to 00b758f7 has its CatchHandler @ 00b75de4 */
  uVar2 = NativeFile::open((char *)local_c0,(ACCESS_MODE)param_2,true);
  if ((uVar2 & 1) != 0) {
                    /* try { // try from 00b75900 to 00b75a43 has its CatchHandler @ 00b75de8 */
    uVar3 = __strlen_chk("# Wavefront OBJ file\n",0x16);
    File::writeDosEOLExpand((File *)local_c0,"# Wavefront OBJ file\n",uVar3);
    uVar3 = __strlen_chk("# Creator: GIANTS Engine\n",0x1a);
    File::writeDosEOLExpand((File *)local_c0,"# Creator: GIANTS Engine\n",uVar3);
    uVar3 = __strlen_chk("# Name: ",9);
    File::writeDosEOLExpand((File *)local_c0,"# Name: ",uVar3);
    uVar3 = __strlen_chk(param_3,0xffffffffffffffff);
    File::writeDosEOLExpand((File *)local_c0,param_3,uVar3);
    uVar3 = __strlen_chk(&DAT_004fddf9,2);
    File::writeDosEOLExpand((File *)local_c0,&DAT_004fddf9,uVar3);
    uVar3 = __strlen_chk("# Scale: ",10);
    File::writeDosEOLExpand((File *)local_c0,"# Scale: ",uVar3);
    uVar4 = FUN_00b77d58((double)param_4,auStack_98,extraout_x1,&DAT_0050d9a5);
    (**(code **)(local_c0[0] + 0x30))(local_c0,auStack_98,uVar4);
    uVar3 = __strlen_chk(&DAT_004fddf9,2);
    File::writeDosEOLExpand((File *)local_c0,&DAT_004fddf9,uVar3);
    uVar3 = __strlen_chk("\ng default",0xb);
    File::writeDosEOLExpand((File *)local_c0,"\ng default",uVar3);
    lVar8 = *(long *)(param_1 + 0x2ef0);
    if ((*(int *)(param_1 + 0x2ef8) - (int)lVar8 & 0xffff0U) != 0) {
      lVar6 = 0;
      uVar7 = 0;
      do {
                    /* try { // try from 00b75a78 to 00b75b63 has its CatchHandler @ 00b75dec */
        uVar3 = __strlen_chk(&DAT_00509a00,4);
        File::writeDosEOLExpand((File *)local_c0,&DAT_00509a00,uVar3);
        uVar4 = FUN_00b77d58((double)(*(float *)(lVar8 + lVar6) * param_4),auStack_98,extraout_x1_00
                             ,&DAT_0050d9a5);
        (**(code **)(local_c0[0] + 0x30))(local_c0,auStack_98,uVar4);
        uVar3 = __strlen_chk(&DAT_004d3339,2);
        File::writeDosEOLExpand((File *)local_c0,&DAT_004d3339,uVar3);
        uVar4 = FUN_00b77d58((double)(*(float *)(lVar8 + lVar6 + 4) * param_4),auStack_98,
                             extraout_x1_01,&DAT_0050d9a5);
        (**(code **)(local_c0[0] + 0x30))(local_c0,auStack_98,uVar4);
        uVar3 = __strlen_chk(&DAT_004d3339,2);
        File::writeDosEOLExpand((File *)local_c0,&DAT_004d3339,uVar3);
        uVar4 = FUN_00b77d58((double)(*(float *)(lVar8 + lVar6 + 8) * param_4),auStack_98,
                             extraout_x1_02,&DAT_0050d9a5);
        (**(code **)(local_c0[0] + 0x30))(local_c0,auStack_98,uVar4);
        uVar7 = uVar7 + 1;
        lVar8 = *(long *)(param_1 + 0x2ef0);
        lVar6 = lVar6 + 0x10;
      } while (uVar7 < (ushort)((uint)(*(int *)(param_1 + 0x2ef8) - (int)lVar8) >> 4));
    }
                    /* try { // try from 00b75b84 to 00b75be7 has its CatchHandler @ 00b75de8 */
    uVar3 = __strlen_chk("\ns off",7);
    File::writeDosEOLExpand((File *)local_c0,"\ns off",uVar3);
    uVar3 = __strlen_chk(&DAT_00504ce0,4);
    File::writeDosEOLExpand((File *)local_c0,&DAT_00504ce0,uVar3);
    uVar3 = __strlen_chk(param_3,0xffffffffffffffff);
    File::writeDosEOLExpand((File *)local_c0,param_3,uVar3);
    if ((int)((ulong)(*(long *)(param_1 + 0x2f70) - *(long *)(param_1 + 0x2f68)) >> 5) != 0) {
      uVar7 = 0;
      uVar3 = 3;
      do {
                    /* try { // try from 00b75c20 to 00b75d5b has its CatchHandler @ 00b75df0 */
        uVar5 = __strlen_chk(&DAT_004f2fda,3);
        File::writeDosEOLExpand((File *)local_c0,&DAT_004f2fda,uVar5);
        uVar5 = __strlen_chk(&DAT_004d3339,2);
        File::writeDosEOLExpand((File *)local_c0,&DAT_004d3339,uVar5);
        uVar4 = FUN_00b77d58(auStack_98,extraout_x1_03,&DAT_004c7f7a,
                             *(ushort *)
                              (*(long *)(param_1 + 0x2f50) +
                              (ulong)*(ushort *)
                                      (*(long *)(param_1 + 0x2f68) + (ulong)(uVar3 - 2) * 8) * 0xc)
                             + 1);
        (**(code **)(local_c0[0] + 0x30))(local_c0,auStack_98,uVar4);
        uVar5 = __strlen_chk(&DAT_004d3339,2);
        File::writeDosEOLExpand((File *)local_c0,&DAT_004d3339,uVar5);
        uVar4 = FUN_00b77d58(auStack_98,extraout_x1_04,&DAT_004c7f7a,
                             *(ushort *)
                              (*(long *)(param_1 + 0x2f50) +
                              (ulong)*(ushort *)
                                      (*(long *)(param_1 + 0x2f68) + (ulong)(uVar3 - 1) * 8) * 0xc)
                             + 1);
        (**(code **)(local_c0[0] + 0x30))(local_c0,auStack_98,uVar4);
        uVar5 = __strlen_chk(&DAT_004d3339,2);
        File::writeDosEOLExpand((File *)local_c0,&DAT_004d3339,uVar5);
        uVar4 = FUN_00b77d58(auStack_98,extraout_x1_05,&DAT_004c7f7a,
                             *(ushort *)
                              (*(long *)(param_1 + 0x2f50) +
                              (ulong)*(ushort *)(*(long *)(param_1 + 0x2f68) + (ulong)uVar3 * 8) *
                              0xc) + 1);
        (**(code **)(local_c0[0] + 0x30))(local_c0,auStack_98,uVar4);
        uVar7 = uVar7 + 1;
        uVar3 = uVar3 + 4;
      } while (uVar7 < ((ulong)(*(long *)(param_1 + 0x2f70) - *(long *)(param_1 + 0x2f68)) >> 5 &
                       0xffffffff));
    }
                    /* try { // try from 00b75d7c to 00b75d9f has its CatchHandler @ 00b75de8 */
    uVar3 = __strlen_chk(&DAT_004fddf9,2);
    File::writeDosEOLExpand((File *)local_c0,&DAT_004fddf9,uVar3);
  }
  NativeFile::~NativeFile((NativeFile *)local_c0);
  if (*(long *)(lVar1 + 0x28) == local_78) {
    return uVar2 & 1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


