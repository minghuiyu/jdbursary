<?php

function jdbursary_front_form($form, $form_state) {

    $form = array();
     
    $form['jdbursary_front_year'] = array(
    		'#type' => 'select',
    		'#title' => t('Please select JD program year'),
    		'#options' => array(
    				1 => 1,
    				2 => 2,
    				3 => 3
    		),

    );

    $form['jdbursary_front_province'] = array(
    		'#type' => 'select',
    		'#title' => t('Where have you lived in the past 12 continuous months prior to your study period?'),
    		'#options' => _getProvinceList(),    		
    );
    
    $form['jdbursary_front_home'] = array(
    		'#type' => 'select',
    		'#title' => t('While you are in school, will you be living with your parent(s)/step-parent/sponsor/legal guardian or living in a home owned or rented by them?'),
    		'#options' => array(
    				1 => 'Yes',
    				0 => 'No',
    		),
    );
    
    $form['jdbursary_front_indigenous'] = array(
		'#type' => 'select',
    		'#title' => t("Do you identify yourself as an Aboriginal person; that is, First Nations, Metis or Inuit?"),
    		'#options' => array(
    				1 => 'Yes',
    				0 => 'No',
    		),
    );
    
    $form['jdbursary_front_disability'] = array(
    		'#type' => 'select',
    		'#title' => t('Are you a student with a permanent disability that affects your studies on a daily basis?'),
    		'#options' => array(
    				1 => 'Yes',
    				0 => 'No',
    		),
    );
    
    $form['jdbursary_front_welfare'] = array(
    		'#type' => 'select',
    		'#title' => t('Are you, or were you at the time of your 19th birthday, a youth in continuing care or custody of a director of child
welfare in B.C., ward of the court;  this means the provincial government is or was your legal guardian?'),
    		'#options' => array(
    				1 => 'Yes',
    				0 => 'No',
    		),
    );
    

    $form['jdbursary_front_status'] = array(
    		'#type' => 'select',
    		'#title' => t('Which will best describe your status during your study period?'),
    		'#options' => array(
    				1 => 'Single Living Away From Home',
    				2 => 'Single Living At Home',
    				3 => 'Married Or Common Law',
    				4 => 'Single Parent',
    		),
    );
    
    
    $form['jdbursary_front_spousestatus'] = array(
    		'#type' => 'select',
    		'#title' => t('Which will best describes your spousal status during your study period?'),
    		'#options' => array(
    				1 => 'Employed Full- or Part-time',
    				2 => 'Unemployed',
    				3 => 'Homecaring Dependent Child(ren)',
    				4 => 'Full Time Post-Secondary Student',
    		),
    );

    $form['jdbursary_front_spouseincome'] = array(
    		'#type' => 'textfield',
    		'#title' => t("Enter your spouse reported total income from line 150 of 2016 Income Tax Return."),
    		'#options' => array(			
    		),
    );
    
    $form['jdbursary_front_fundinge'] = array(
    		'#type' => 'textfield',
    		'#title' => t("Funding you will receive, or you are contributing, to help meet specific educational costs. Include all funding you will receive or will voluntarily contribute towards your education during this study period. This includes Government and Employer funding, as well as voluntary contributions from family members."),
    		'#options' => array(			
    		),
    );
    
    $form['jdbursary_front_scholarship'] = array(
    		'#type' => 'textfield',
    		'#title' => t("Merit-based scholarships or need-based bursaries, including provincial government scholarships."),
    		'#options' => array(			
    		),
    );

    $form['jdbursary_front_line150'] = array(
    		'#type' => 'textfield',
    		'#title' => t("Enter your reported total income from line 150 of your 2016 Income Tax Return."),
    		'#options' => array(			
    		),
    );

    $form['jdbursary_front_dependent'] = array(
    		'#type' => 'textfield',
    		'#title' => t("How many eligible dependents do you have? Eligible dependants are any dependants for whom you receive the Canada Child Tax Benefit or for whom you claim a benefit on your 2016 income tax return."),
    		'#options' => array(			
    		),
    );

    $form['jdbursary_front_submit'] = array(
    		'#type' => 'submit',
    		'#value' => t("Estimate"),
    		'#options' => array(			
    		),
    );
    return $form;
}

?>