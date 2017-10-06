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
    
    
    
    return $form;
}

?>