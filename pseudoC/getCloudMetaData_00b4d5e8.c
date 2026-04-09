// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: getCloudMetaData
// Entry Point: 00b4d5e8
// Size: 180 bytes
// Signature: undefined __cdecl getCloudMetaData(ICloudDevice * param_1, _func_void_void_ptr_ErrorCode_char_ptr * param_2, void * param_3)


/* GenericSaveGameUtil::getCloudMetaData(ICloudDevice*, void (*)(void*, SaveGameUtilBase::ErrorCode,
   char const*), void*) */

void GenericSaveGameUtil::getCloudMetaData
               (ICloudDevice *param_1,_func_void_void_ptr_ErrorCode_char_ptr *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  long lVar3;
  
  if (s_state == 0) {
    puVar2 = (undefined4 *)operator_new(0x20);
    lVar3 = *(long *)param_1;
    *puVar2 = 0;
    *(undefined8 *)(puVar2 + 6) = 0;
    uVar1 = s_pCloudSession;
    *(_func_void_void_ptr_ErrorCode_char_ptr **)(puVar2 + 2) = param_2;
    *(void **)(puVar2 + 4) = param_3;
    s_state = 1;
                    /* WARNING: Could not recover jumptable at 0x00b4d688. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(lVar3 + 0x40))(param_1,uVar1,&s_pGetMetaDataOperation);
    return;
  }
  if (param_2 != (_func_void_void_ptr_ErrorCode_char_ptr *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00b4d62c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*param_2)(param_3,0xb,(char *)0x0);
    return;
  }
  return;
}


