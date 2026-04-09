// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: saveImage
// Entry Point: 00a98954
// Size: 508 bytes
// Signature: undefined __cdecl saveImage(char * param_1, ImageDesc * param_2)


/* JPEGUtil::saveImage(char const*, ImageDesc const&) */

void JPEGUtil::saveImage(char *param_1,ImageDesc *param_2)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  long *plVar4;
  uint uVar5;
  long local_330;
  undefined auStack_328 [168];
  undefined8 local_280;
  code **local_278;
  long local_258;
  undefined8 local_250;
  int local_248;
  undefined4 local_244;
  undefined8 local_240;
  undefined4 local_228;
  int local_224;
  long local_48;
  
  lVar2 = tpidr_el0;
  local_48 = *(long *)(lVar2 + 0x28);
  if ((*(uint *)(param_2 + 0x40) | 2) == 3) {
    local_280 = jpeg_std_error(auStack_328);
    jpeg_CreateCompress(&local_280,0x5a,0x238);
    uVar5 = *(uint *)(param_2 + 0x18);
    if (uVar5 != 1) {
      if (uVar5 != 3) goto LAB_00a98b20;
      uVar5 = 2;
    }
    plVar4 = (long *)FileManager::get((FileManager *)FileManager::s_singletonFileManager,param_1,1,
                                      false);
    if (plVar4 != (long *)0x0) {
      if (*(int *)(param_2 + 0x44) == 1) {
        ImageUtil::flipY(*(uchar **)(param_2 + 0x28),*(uint *)(param_2 + 0x20),*(uint *)param_2,
                         *(uint *)(param_2 + 4),uVar5,*(FORMAT *)(param_2 + 0x40),(char *)0x0,false)
        ;
      }
      iVar1 = *(int *)(param_2 + 0x14);
      local_244 = 1;
      if (iVar1 != 1) {
        local_244 = 2;
      }
      jpeg_set_defaults(&local_280);
      local_250 = *(undefined8 *)param_2;
      local_228 = 8;
      local_240 = 0x3ff0000000000000;
      local_248 = iVar1;
      local_224 = iVar1;
      jpeg_set_quality(&local_280,0x711,0);
      if (local_258 == 0) {
        local_258 = (**local_278)(&local_280,0,0x40);
        *(long **)(local_258 + 0x38) = plVar4;
      }
      *(code **)(local_258 + 0x10) = init_destination;
      *(code **)(local_258 + 0x18) = empty_output_buffer;
      *(code **)(local_258 + 0x20) = term_destination;
      jpeg_start_compress(&local_280,1);
      local_330 = *(long *)(param_2 + 0x28);
      if (*(int *)(param_2 + 4) != 0) {
        uVar5 = 0;
        do {
          jpeg_write_scanlines(&local_280,&local_330,1);
          uVar5 = uVar5 + 1;
          local_330 = local_330 + (ulong)(uint)(*(int *)param_2 * iVar1);
        } while (uVar5 < *(uint *)(param_2 + 4));
      }
      jpeg_finish_compress(&local_280);
      jpeg_destroy_compress(&local_280);
      (**(code **)(*plVar4 + 8))(plVar4);
    }
    bVar3 = plVar4 != (long *)0x0;
  }
  else {
LAB_00a98b20:
    bVar3 = false;
  }
  if (*(long *)(lVar2 + 0x28) == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail(bVar3);
}


