// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: unpackPlatformServerId
// Entry Point: 00b42bdc
// Size: 580 bytes
// Signature: undefined __cdecl unpackPlatformServerId(basic_string * param_1, SESSION_TYPE * param_2, basic_string * param_3)


/* MasterServerUtil::unpackPlatformServerId(std::__ndk1::basic_string<char,
   std::__ndk1::char_traits<char>, std::__ndk1::allocator<char> > const&,
   MasterServerUtil::SESSION_TYPE&, std::__ndk1::basic_string<char, std::__ndk1::char_traits<char>,
   std::__ndk1::allocator<char> >&) */

bool MasterServerUtil::unpackPlatformServerId
               (basic_string *param_1,SESSION_TYPE *param_2,basic_string *param_3)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  SESSION_TYPE SVar9;
  ulong uVar10;
  ulong uVar11;
  byte *pbVar12;
  uint local_6c;
  undefined8 local_68;
  void *local_58;
  byte *local_50;
  byte *local_48;
  undefined8 local_40;
  long local_38;
  
  lVar3 = tpidr_el0;
  local_38 = *(long *)(lVar3 + 0x28);
  local_50 = (byte *)0x0;
  local_48 = (byte *)0x0;
  local_40 = 0;
  local_68 = (uchar *)CONCAT53(local_68._3_5_,0x7c02);
                    /* try { // try from 00b42c18 to 00b42c2b has its CatchHandler @ 00b42e34 */
  iVar8 = StringUtil::split(param_1,(basic_string *)&local_68,(vector *)&local_50,true,true);
  if (((ulong)local_68 & 1) != 0) {
    operator_delete(local_58);
  }
  pbVar4 = local_50;
  if (iVar8 == 2) {
    bVar2 = *local_50;
    uVar10 = *(ulong *)(local_50 + 8);
    uVar11 = (ulong)(bVar2 >> 1);
    uVar1 = uVar11;
    if ((bVar2 & 1) != 0) {
      uVar1 = uVar10;
    }
    if (uVar1 == 3) {
                    /* try { // try from 00b42c68 to 00b42c83 has its CatchHandler @ 00b42e28 */
      iVar8 = std::__ndk1::
              basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
              compare((ulong)local_50,0,(char *)0xffffffffffffffff,0x4f5529);
      if (iVar8 != 0) {
        bVar2 = *pbVar4;
        uVar10 = *(ulong *)(pbVar4 + 8);
        uVar11 = (ulong)(bVar2 >> 1);
        goto LAB_00b42c98;
      }
      SVar9 = 3;
    }
    else {
LAB_00b42c98:
      uVar1 = uVar11;
      if ((bVar2 & 1) != 0) {
        uVar1 = uVar10;
      }
      if (uVar1 == 3) {
                    /* try { // try from 00b42ca8 to 00b42cc3 has its CatchHandler @ 00b42e24 */
        iVar8 = std::__ndk1::
                basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                compare((ulong)pbVar4,0,(char *)0xffffffffffffffff,0x4dea9a);
        if (iVar8 == 0) {
          SVar9 = 2;
          goto LAB_00b42d2c;
        }
        bVar2 = *pbVar4;
        uVar10 = *(ulong *)(pbVar4 + 8);
        uVar11 = (ulong)(bVar2 >> 1);
      }
      if ((bVar2 & 1) != 0) {
        uVar11 = uVar10;
      }
                    /* try { // try from 00b42ce8 to 00b42d03 has its CatchHandler @ 00b42e20 */
      if ((uVar11 != 3) ||
         (iVar8 = std::__ndk1::
                  basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
                  compare((ulong)pbVar4,0,(char *)0xffffffffffffffff,0x506089), iVar8 != 0))
      goto LAB_00b42d08;
      SVar9 = 4;
    }
LAB_00b42d2c:
    *param_2 = SVar9;
    local_6c = 0;
    pbVar12 = *(byte **)(pbVar4 + 0x28);
    local_68 = (uchar *)0x0;
    if ((pbVar4[0x18] & 1) == 0) {
      pbVar12 = pbVar4 + 0x19;
    }
                    /* try { // try from 00b42d4c to 00b42e0f has its CatchHandler @ 00b42e2c */
    StringUtil::base64Decode((char *)pbVar12,false,(uchar **)&local_68,&local_6c);
    bVar6 = local_68 != (uchar *)0x0;
    bVar7 = local_6c != 0;
    if (bVar6 && bVar7) {
      std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
      assign((char *)param_3,(ulong)local_68);
    }
    if (local_68 != (uchar *)0x0) {
      operator_delete__(local_68);
    }
    bVar6 = bVar6 && bVar7;
    pbVar4 = local_50;
  }
  else {
LAB_00b42d08:
    bVar6 = false;
    pbVar4 = local_50;
  }
  local_50 = pbVar4;
  pbVar12 = local_48;
  if (pbVar4 != (byte *)0x0) {
    while (pbVar5 = pbVar12, pbVar5 != pbVar4) {
      pbVar12 = pbVar5 + -0x18;
      if ((*pbVar12 & 1) != 0) {
        operator_delete(*(void **)(pbVar5 + -8));
      }
    }
    local_48 = pbVar4;
    operator_delete(local_50);
  }
  if (*(long *)(lVar3 + 0x28) == local_38) {
    return bVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


