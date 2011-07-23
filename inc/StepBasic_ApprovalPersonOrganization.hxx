// This file is generated by WOK (CPPExt).
// Please do not edit this file; modify original file instead.
// The copyright and license terms as defined for the original file apply to 
// this header file considered to be the "object code" form of the original source.

#ifndef _StepBasic_ApprovalPersonOrganization_HeaderFile
#define _StepBasic_ApprovalPersonOrganization_HeaderFile

#ifndef _Standard_HeaderFile
#include <Standard.hxx>
#endif
#ifndef _Standard_DefineHandle_HeaderFile
#include <Standard_DefineHandle.hxx>
#endif
#ifndef _Handle_StepBasic_ApprovalPersonOrganization_HeaderFile
#include <Handle_StepBasic_ApprovalPersonOrganization.hxx>
#endif

#ifndef _StepBasic_PersonOrganizationSelect_HeaderFile
#include <StepBasic_PersonOrganizationSelect.hxx>
#endif
#ifndef _Handle_StepBasic_Approval_HeaderFile
#include <Handle_StepBasic_Approval.hxx>
#endif
#ifndef _Handle_StepBasic_ApprovalRole_HeaderFile
#include <Handle_StepBasic_ApprovalRole.hxx>
#endif
#ifndef _MMgt_TShared_HeaderFile
#include <MMgt_TShared.hxx>
#endif
class StepBasic_Approval;
class StepBasic_ApprovalRole;
class StepBasic_PersonOrganizationSelect;



class StepBasic_ApprovalPersonOrganization : public MMgt_TShared {

public:

  //! Returns a ApprovalPersonOrganization <br>
  Standard_EXPORT   StepBasic_ApprovalPersonOrganization();
  
  Standard_EXPORT   virtual  void Init(const StepBasic_PersonOrganizationSelect& aPersonOrganization,const Handle(StepBasic_Approval)& aAuthorizedApproval,const Handle(StepBasic_ApprovalRole)& aRole) ;
  
  Standard_EXPORT     void SetPersonOrganization(const StepBasic_PersonOrganizationSelect& aPersonOrganization) ;
  
  Standard_EXPORT     StepBasic_PersonOrganizationSelect PersonOrganization() const;
  
  Standard_EXPORT     void SetAuthorizedApproval(const Handle(StepBasic_Approval)& aAuthorizedApproval) ;
  
  Standard_EXPORT     Handle_StepBasic_Approval AuthorizedApproval() const;
  
  Standard_EXPORT     void SetRole(const Handle(StepBasic_ApprovalRole)& aRole) ;
  
  Standard_EXPORT     Handle_StepBasic_ApprovalRole Role() const;




  DEFINE_STANDARD_RTTI(StepBasic_ApprovalPersonOrganization)

protected:




private: 


StepBasic_PersonOrganizationSelect personOrganization;
Handle_StepBasic_Approval authorizedApproval;
Handle_StepBasic_ApprovalRole role;


};





// other Inline functions and methods (like "C++: function call" methods)


#endif