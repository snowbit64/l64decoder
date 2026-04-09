// Ghidra Decompiler Output - AArch64 (64-bit)
// Function: GetValueHelperClass
// Entry Point: 00cc57c8
// Size: 564 bytes
// Signature: undefined __thiscall GetValueHelperClass(GetValueHelperClass<CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>>,CryptoPP::DL_PublicKey<CryptoPP::ECPPoint>> * this, DL_PublicKeyImpl * param_1, char * param_2, type_info * param_3, void * param_4, NameValuePairs * param_5)


/* CryptoPP::GetValueHelperClass<CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>
   >, CryptoPP::DL_PublicKey<CryptoPP::ECPPoint>
   >::GetValueHelperClass(CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>
   > const*, char const*, std::type_info const&, void*, CryptoPP::NameValuePairs const*) */

void __thiscall
CryptoPP::
GetValueHelperClass<CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>>,CryptoPP::DL_PublicKey<CryptoPP::ECPPoint>>
::GetValueHelperClass
          (GetValueHelperClass<CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>>,CryptoPP::DL_PublicKey<CryptoPP::ECPPoint>>
           *this,DL_PublicKeyImpl *param_1,char *param_2,type_info *param_3,void *param_4,
          NameValuePairs *param_5)

{
  long lVar1;
  char cVar2;
  byte bVar3;
  int iVar4;
  long *plVar5;
  GetValueHelperClass *pGVar6;
  GetValueHelperClass<CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>>,CryptoPP::DL_PublicKey<CryptoPP::ECPPoint>>
  GVar7;
  char *pcVar8;
  GetValueHelperClass<CryptoPP::DL_PublicKey<CryptoPP::ECPPoint>,CryptoPP::DL_PublicKey<CryptoPP::ECPPoint>>
  aGStack_80 [40];
  long local_58;
  
  lVar1 = tpidr_el0;
  local_58 = *(long *)(lVar1 + 0x28);
  *(DL_PublicKeyImpl **)this = param_1;
  *(char **)(this + 8) = param_2;
  *(type_info **)(this + 0x10) = param_3;
  *(void **)(this + 0x18) = param_4;
  *(undefined2 *)(this + 0x20) = 0;
  iVar4 = strcmp(param_2,"ValueNames");
  if (iVar4 == 0) {
    *(undefined2 *)(this + 0x20) = 0x101;
    NameValuePairs::ThrowIfTypeMismatch
              (param_2,(type_info *)
                       &std::__ndk1::
                        basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                        ::typeinfo,param_3);
    if (param_5 != (NameValuePairs *)0x0) {
      (**(code **)(*(long *)param_5 + 0x10))(param_5,*(undefined8 *)(this + 8),param_3,param_4);
    }
    pcVar8 = *(char **)(this + 8);
    plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1);
    GetValueHelperClass<CryptoPP::DL_PublicKey<CryptoPP::ECPPoint>,CryptoPP::DL_PublicKey<CryptoPP::ECPPoint>>
    ::GetValueHelperClass
              (aGStack_80,(DL_PublicKey *)param_1,pcVar8,param_3,param_4,
               (NameValuePairs *)((long)plVar5 + *(long *)(*plVar5 + -0x70)));
    GetValueHelperClass<CryptoPP::DL_PublicKey<CryptoPP::ECPPoint>,CryptoPP::DL_PublicKey<CryptoPP::ECPPoint>>
    ::operator()((char *)aGStack_80,(_func_ECPPoint_ptr *)"PublicElement");
    pcVar8 = (char *)std::__ndk1::
                     basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>
                     ::append(*(char **)(this + 0x18));
    cVar2 = std::__ndk1::
            basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::append
                      (pcVar8);
    std::__ndk1::basic_string<char,std::__ndk1::char_traits<char>,std::__ndk1::allocator<char>>::
    push_back(cVar2);
    if (this[0x20] !=
        (GetValueHelperClass<CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>>,CryptoPP::DL_PublicKey<CryptoPP::ECPPoint>>
         )0x0) goto LAB_00cc59cc;
    param_2 = *(char **)(this + 8);
    iVar4 = strncmp(param_2,"ThisPointer:",0xc);
    if (iVar4 == 0) goto LAB_00cc5840;
LAB_00cc5948:
    if (param_5 != (NameValuePairs *)0x0) {
      bVar3 = (**(code **)(*(long *)param_5 + 0x10))(param_5,param_2,param_3,param_4);
      this[0x20] = (GetValueHelperClass<CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>>,CryptoPP::DL_PublicKey<CryptoPP::ECPPoint>>
                    )(bVar3 & 1);
      if ((bVar3 & 1) != 0) goto LAB_00cc59cc;
    }
    pcVar8 = *(char **)(this + 8);
    plVar5 = (long *)(**(code **)(*(long *)param_1 + 0x10))(param_1);
    GetValueHelperClass<CryptoPP::DL_PublicKey<CryptoPP::ECPPoint>,CryptoPP::DL_PublicKey<CryptoPP::ECPPoint>>
    ::GetValueHelperClass
              (aGStack_80,(DL_PublicKey *)param_1,pcVar8,param_3,param_4,
               (NameValuePairs *)((long)plVar5 + *(long *)(*plVar5 + -0x70)));
    pGVar6 = GetValueHelperClass<CryptoPP::DL_PublicKey<CryptoPP::ECPPoint>,CryptoPP::DL_PublicKey<CryptoPP::ECPPoint>>
             ::operator()((char *)aGStack_80,(_func_ECPPoint_ptr *)"PublicElement");
    GVar7 = *(GetValueHelperClass<CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>>,CryptoPP::DL_PublicKey<CryptoPP::ECPPoint>>
              *)(pGVar6 + 0x20);
  }
  else {
    iVar4 = strncmp(param_2,"ThisPointer:",0xc);
    if (iVar4 != 0) goto LAB_00cc5948;
LAB_00cc5840:
    iVar4 = strcmp(param_2 + 0xc,
                   "N8CryptoPP16DL_PublicKeyImplINS_21DL_GroupParameters_ECINS_3ECPEEEEE");
    if (iVar4 != 0) goto LAB_00cc5948;
    NameValuePairs::ThrowIfTypeMismatch
              (param_2,(type_info *)
                       &DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>>*::typeinfo,
               *(type_info **)(this + 0x10));
    GVar7 = (GetValueHelperClass<CryptoPP::DL_PublicKeyImpl<CryptoPP::DL_GroupParameters_EC<CryptoPP::ECP>>,CryptoPP::DL_PublicKey<CryptoPP::ECPPoint>>
             )0x1;
    *(DL_PublicKeyImpl **)param_4 = param_1;
  }
  this[0x20] = GVar7;
LAB_00cc59cc:
  if (*(long *)(lVar1 + 0x28) == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}


